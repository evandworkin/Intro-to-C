#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr1 = calloc(10, sizeof(int));
    int *arr2 = calloc(12, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        arr1[i] = i;
    }
    for (int i = 0; i < 12; i++)
    {
        arr2[i] = i + 10;
    }
    arr1 = realloc(arr1, 22 * sizeof(int));
    for (int i = 0; i < 12; i++)
    {
        arr1[i + 10] = arr2[i];
    }
    
    for (int i = 0; i < 22; i++)
    {
        printf("%d, ", arr1[i]);
    }
    printf("\n");
    free(arr1);
    free(arr2);
    return 0;
}