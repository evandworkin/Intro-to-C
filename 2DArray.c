#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ** array = malloc(3 * sizeof(int*));
    // int array[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    printf("Address of larger array: %p\n", array);
    array[0] = calloc(3, sizeof(int));
    array[1] = calloc(3, sizeof(int));
    array[2] = calloc(3, sizeof(int)); 
    printf("Address of array[0]: %p\n", array[0]);
    printf("Address of array[1]: %p\n", array[1]);
    printf("Address of array[2]: %p\n", array[2]);
    printf("Difference in array locations [1] - [0]: %ld\n", array[1] - array[0]);
    printf("Difference in array locations [2] - [1]: %ld\n", array[2] - array[1]);

    for (int i = 0; i < 9; i++)
    {
        array[i / 3][i % 3] = i;
    }

    printf("Array printed smartly:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d, ", array[i / 3][i % 3]);
        if (i % 3 == 2)
        {
            printf("\n");
        }
    }

    printf("Array printed... dumbly?:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d, ", *(array[0] + i));
        if (i % 3 == 2)
        {
            printf("\n");
        }
    }

    for (int i = 0; i < 3; i++)
    {
        free(array[i]);
    }
    free(array);

    // conclusion: arrays, when initialized as double pointers
    // do not store data contiguously. when initiatiliazed as
    // 2d arrays with bracket notation, they are contiguous
}