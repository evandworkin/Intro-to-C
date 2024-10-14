#include <stdio.h>

int missingInt(int [], int);

int main()
{
    int arr[] = {1, 2, 8, 3, 5, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The missing number is %d\n", missingInt(arr, size));
}

int missingInt(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) // calculate the sum of the list
    {
        sum += arr[i];
    }
    // the sum of a [1, 2 ... N] = ((N + 1) * N) / 2. N = size + 1
    return ((size + 1) * (size + 2)) / 2 - sum;
}