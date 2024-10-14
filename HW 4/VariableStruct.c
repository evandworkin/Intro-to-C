#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10

typedef struct {
    char * first_name;
    int first_length;
    int first_capacity;
    char * last_name;
    int last_length;
    int last_capacity;
} Person;

void addChar(char ** name, int * capacity, int *length, char c)
{
    // check for a resize
    if (*length + 1 >= *capacity)
    {
        *capacity *= 2;
        *name = (char *) realloc(*name, *capacity * sizeof(char));
        if (*name == NULL)
        {
            printf("Memory reallocation failed\n");
            exit(0);
        }
    }
    (*name)[*length] = c;
    *length += 1;
    (*name)[*length] = '\0';
}

void freePersonMemory(Person * person)
{
    free(person->first_name);
    free(person->last_name);
}

int main()
{
    Person person;
    person.first_capacity = INITIAL_CAPACITY;
    person.first_name = (char *) malloc(person.first_capacity * sizeof(char));
    if (person.first_name == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    person.first_name[0] = '\0';
    person.first_length = 0;

    person.last_capacity = INITIAL_CAPACITY;
    person.last_name = (char *) malloc(person.last_capacity * sizeof(char));
    if (person.last_name == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    person.last_name[0] = '\0';
    person.last_length = 0;

    printf("Please enter your full name, followed by the Enter key:\n");

    char c;
    while ((c = getchar()) != ' ')
    {
        addChar(&person.first_name, &person.first_capacity, &person.first_length, c);
    }
    while ((c = getchar()) != '\n')
    {
        addChar(&person.last_name, &person.last_capacity, &person.last_length, c);
    }
    printf("Your name is: %s %s\n", person.first_name, person.last_name);
    freePersonMemory(&person);
}