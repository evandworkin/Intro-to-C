#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp(const void *p, const void *q)
{
    int x = *(const int *)p;
    int y = *(const int *)q;
    if (x == y) return 0;
    if (x < y) return -1;
    else return 1;
}

int main()
{
    int *arr1 = malloc(10 * sizeof(int));
    int *arr2 = malloc(10 * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        arr1[i] = rand() % 100;
        arr2[i] = rand() % 100;
    }

    qsort(arr1, 10, sizeof(*arr1), comp);
    qsort(arr2, 10, sizeof(*arr2), comp);

    printf("%d", arr1[0]);
    for (int i = 1; i < 10; i++)
    {
        printf(", %d", arr1[i]);
    }
    printf("\n");

    printf("%d", arr2[0]);
    for (int i = 1; i < 10; i++)
    {
        printf(", %d", arr2[i]);
    }
    printf("\n");

    int *arr3 = malloc(20 * sizeof(int));

    int i = 0, j = 0;
    while (i < 10 && j < 10)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[i + j] = arr1[i];
            i++;
        } else {
            arr3[i + j] = arr2[j];
            j++;
        }
    }
    while (i < 10)
    {
        arr3[i + j] = arr1[i];
        i++;
    }
    while (j < 10)
    {
        arr3[i + j] = arr2[j];
        j++;
    }

    printf("%d", arr3[0]);
    for (int i = 1; i < 20; i++)
    {
        printf(", %d", arr3[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(arr3);
}