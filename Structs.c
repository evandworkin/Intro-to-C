#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    int grade;
} Student;

void display(Student s);

int main()
{
    Student mary;
    strcpy(mary.name, "Mary Jane");
    mary.grade = 11;
    Student mary_copy;
    mary_copy = mary;
    strcpy(mary.name, "Sally Jane");
    printf("Mary's name: %s\n", mary.name);
    // Sally Jane
    printf("Mary copy's name: %s\n", mary_copy.name);
    // Mary Jane
    
    // Conclusion: mary_copy = mary is a deep copy
}