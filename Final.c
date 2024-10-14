#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// for q1
#define SIZE 3

void square(int ** arr, int row, int column)
{
    int value = *(*(arr + row) + column);
    *(*(arr + row) + column) = value * value;
}

void q1()
{
    int ** arr;
    // allocate memory for the 2d array
    arr = malloc(SIZE * sizeof(int *));
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = malloc(SIZE * sizeof(int));
    }

    // populate the array (simply by arr[r][c] = 3r + c)
    for (int row = 0; row < SIZE; row++)
    {
        for (int column = 0; column < SIZE; column++)
        {
            *(*(arr + row) + column) = row * 3 + column;
        }
    }

    // square each element
    for (int row = 0; row < SIZE; row++)
    {
        for (int column = 0; column < SIZE; column++)
        {
            square(arr, row, column);
        }
    }

    // print each element
    for (int row = 0; row < SIZE; row++)
    {
        for (int column = 0; column < SIZE; column++)
        {
            printf("%d, ", *(*(arr + row) + column));
        }
        printf("\n");
    }

    // free memory
    for (int i = 0; i < SIZE; i++)
    {
        free(arr[i]);
    }
    free(arr);
}









// for q2
#define ROTATION_AMOUNT 2
void rotate(int, int *, int);
void print_arr(int *, int);

void q2()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    int len = 6;
    printf("Initial array:\n");
    print_arr(arr, len);
    rotate(len, arr, ROTATION_AMOUNT);
    printf("Array after rotation by %d\n", ROTATION_AMOUNT);
    print_arr(arr, len);
}

void rotate(int len, int * array, int k)
{
    // base case (i implemented it recursively)
    if (k == 0)
    {
        return;
    }
    int last_elem = array[len - 1];
    for (int i = len - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = last_elem;
    rotate(len, array, k - 1);
}

void print_arr(int * arr, int len)
{
    printf("[");
    for (int i = 0; i < len - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}





// for q3
void q3()
{
    FILE *input_file, *output_file;
    char ch;

    // open the input file 
    input_file = fopen("text.txt", "r");
    if (input_file == NULL)
    {
        printf("Error opening input file!\n");
        exit(1);
    }

    // open the output file
    output_file = fopen("caps.txt", "w");
    if (output_file == NULL)
    {
        printf("Error creating output file!\n");
        fclose(input_file); // Close the input file before exiting
        exit(1);
    }

    // run through text.txt and append to caps.txt if it's uppercase
    ch = fgetc(input_file);
    while (!feof(input_file))
    {
        if (isupper(ch))
        {
            fputc(ch, output_file);
        }
        ch = fgetc(input_file);
    }

    // close the files
    fclose(input_file);
    fclose(output_file);
}







// for q4
#define NUM_ANIMALS 3
#define LEN_NAME 50

typedef struct {
    char animal[LEN_NAME];
    int age;
    int location;
} animals;

void populate(animals * animal_arr, int index)
{
    animals * curr = &(animal_arr[index]);
    printf("What kind of animal is animal #%d?\n", index + 1);
    fflush(stdin);
    fgets(curr->animal, LEN_NAME, stdin);
    printf("How old is animal #%d?\n", index + 1);
    fflush(stdin);
    scanf("%d", &curr->age);
    printf("What is the location of animal #%d?\n", index + 1);
    fflush(stdin);
    scanf("%d", &curr->location);
    fflush(stdin);
}

void q4()
{
    animals * animal_arr = malloc(NUM_ANIMALS * sizeof(animals));
    // populate
    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        populate(animal_arr, i);
    }
    
    // print
    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        printf("\n");
        printf("Animal #%d:\n", i + 1);
        printf("Type: %sAge: %d\nLocation: %d\n", animal_arr[i].animal, animal_arr[i].age, animal_arr[i].location);
    }
    
    // free memory
    free(animal_arr);
}







// for q5
#define ARRAY_LENGTH 5

typedef struct {
    int * val;
    char * str;
} test;

void input_values(test * arr, int str_len, int index)
{
    printf("\n***** test %d *****\n", index + 1);
    printf("Input an integer:\n");
    scanf("%d", arr[index].val);
    fflush(stdin);
    printf("Input a String:\n");
    fgets(arr[index].str, str_len, stdin);
    // replace new line character with null terminator
    int i = 0;
    for (i = 0; arr[index].str[i] != '\n'; i++) {
        if (i + 1 == str_len)
        {
            break;
        }
    }
    arr[index].str[i] = '\0';
    fflush(stdin);
}

void q5()
{
    test arr[ARRAY_LENGTH];
    int str_len;
    printf("What's the length of the strings?\n");
    scanf("%d", &str_len);
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        arr[i].val = malloc(sizeof(int));
        arr[i].str = malloc((str_len + 1) * sizeof(char));
        input_values(arr, str_len + 1, i);
    }
    for (int j = 0; j < ARRAY_LENGTH; j++)
    {
        printf("\n***** test %d *****\n", j + 1);
        printf("%d, %s\n", *arr[j].val, arr[j].str);
    }

    // free memory
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        free(arr[i].val);
        free(arr[i].str);
    }
}







// main function runs all the questions
int main()
{
    printf("\n*** Q1 ***\n");
    q1();
    printf("\n*** Q2 ***\n");
    q2();
    printf("\n(Q3 is done in files text.txt and caps.txt, nothing printed to console)\n");
    q3();
    printf("\n*** Q4 ***\n");
    q4();
    printf("\n*** Q5 ***\n");
    q5();
}