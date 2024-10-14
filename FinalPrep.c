#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ARRAY_LENGTH 3
#define MAX_LENGTH 1000

typedef struct {
    int * val;
    char * str;
} test;

void input_values(test ** arr, int str_len, int index)
{
    printf("Input an integer:\n");
    scanf("%d", arr[index]->val);
    fflush(stdin);
    printf("Input a String:\n");
    fgets(arr[index]->str, str_len, stdin);
    // ensure that the string ends with a null terminator
    (arr[index]->str)[str_len - 1] = '\0';
    fflush(stdin);
}

void q4()
{
    test *arr[ARRAY_LENGTH];
    int str_len;
    printf("What's the length of the strings?\n");
    scanf("%d", &str_len);
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        arr[i] = malloc(sizeof(test));
        arr[i]->val = malloc(sizeof(int));
        arr[i]->str = malloc(str_len * sizeof(char));
        input_values(arr, str_len + 1, i);
    }
    for (int j = 0; j < ARRAY_LENGTH; j++)
    {
        printf("%d, %s\n", *arr[j]->val, arr[j]->str);
    }
}

void q3()
{
    char * str = malloc(5 * sizeof(char));
    char * ptr;
    printf("Enter a 4-digit hexadecimal:\n");
    fgets(str, 4, stdin);
    fflush(stdin);
    long num1 = strtol(str, &ptr, 16);
    printf("Enter a 4-digit hexadecimal:\n");
    fgets(str, 4, stdin);
    fflush(stdin);
    long num2 = strtol(str, &ptr, 16);
    printf("Enter a 4-digit hexadecimal:\n");
    fgets(str, 4, stdin);
    fflush(stdin);
    long num3 = strtol(str, &ptr, 16);
    printf("Enter a 4-digit hexadecimal:\n");
    fgets(str, 4, stdin);
    fflush(stdin);
    long num4 = strtol(str, &ptr, 16);
    unsigned char result = (unsigned char)(((unsigned char)num1 & (unsigned char)num2) | ((unsigned char)num3 ^ (unsigned char)num4));
    printf("%X\n", result);
}

void q2()
{
    FILE *file;
    char filename[100];
    char text[MAX_LENGTH];
    
    printf("Enter the name of the file to append: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0; // Remove the trailing newline character
    
    // Open the file for appending
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    
    fflush(stdin); // Flush the input buffer
    
    printf("Enter the text to append to the file: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Remove the trailing newline character
    
    // Append the string to the file
    fprintf(file, "%s\n", text);
    
    // Close the file
    fclose(file);
    
    printf("Text appended successfully to %s\n", filename);
}

void q5()
{
    FILE *input_file, *output_file;
    char ch;

    // Open the input file for reading
    input_file = fopen("text.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        exit(1);
    }

    // Open the output file for writing
    output_file = fopen("caps.txt", "w");
    if (output_file == NULL) {
        printf("Error creating output file!\n");
        fclose(input_file); // Close the input file before exiting
        exit(1);
    }

    // Scan text.txt and copy capital letters to caps.txt
    while ((ch = fgetc(input_file)) != EOF) {
        if (isupper(ch)) {
            fputc(ch, output_file);
        }
    }

    // Close the files
    fclose(input_file);
    fclose(output_file);

    printf("Capital letters copied to caps.txt successfully.\n");
}

int main()
{
    q5();
}