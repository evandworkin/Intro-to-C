#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int* value;
    char* str;
} test;

int main()
{
    int max_length;
    printf("What is the maximum length of the string?\n");
    scanf("%d", &max_length);

    // make sure to malloc the struct itself, as well as all the values within it
    test* test1 = malloc(sizeof(test));
    test* test2 = malloc(sizeof(test));
    test* test3 = malloc(sizeof(test));
    test1->value = malloc(sizeof(int));
    test2->value = malloc(sizeof(int));
    test3->value = malloc(sizeof(int));
    test1->str = (char*)malloc(max_length * sizeof(char));
    test2->str = (char*)malloc(max_length * sizeof(char));
    test3->str = (char*)malloc(max_length * sizeof(char));

    printf("What is the integer contents of test1?\n");
    scanf("%d", test1->value);
    printf("What is the integer contents of test2?\n");
    scanf("%d", test2->value);
    printf("What is the integer contents of test3?\n");
    scanf("%d", test3->value);

    char* str_input = malloc(max_length * sizeof(char));
    printf("What is the string contents of test1?\n");
    scanf("%s", str_input);
    // strcpy(destination, source)
    strcpy(test1->str, str_input);
    printf("What is the string contents of test2?\n");
    scanf("%s", str_input);
    strcpy(test2->str, str_input);
    printf("What is the string contents of test3?\n");
    scanf("%s", str_input);
    strcpy(test3->str, str_input);

    printf("Test1\nValue = %d, String = %s\n", *test1->value, test1->str);
    printf("Test2\nValue = %d, String = %s\n", *test2->value, test2->str);
    printf("Test3\nValue = %d, String = %s\n", *test3->value, test3->str);

    free(test1->value);
    free(test2->value);
    free(test3->value);
    free(test1->str);
    free(test2->str);
    free(test3->str);
    free(test1);
    free(test2);
    free(test3);
}