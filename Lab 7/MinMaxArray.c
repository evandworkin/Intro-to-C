#include <stdio.h>

void getMinMax(int arr[], int size, int *min, int *max);

int main()
{
    int arr[4] = {0, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    getMinMax(arr, size, &min, &max);
    printf("Min: %d\nMax: %d\n", min, max);
}

void getMinMax(int arr[], int size, int *min, int *max)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}