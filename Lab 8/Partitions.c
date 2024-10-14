#include <stdio.h>
#include <math.h>

void printPartition(int arr[], int k)
{
    printf("[%d", arr[k - 1]);
    for (int i = k - 2; i >= 0; i--)
    {
        printf(", %d", arr[i]);
    }
    printf("]\n");
}

void generate(int j, int k, int start, int arr[], int index)
{
    if (index == k) // we are at the end of the array
    {
        if (j == 0) // and there are no numbers left
        {
            // we found a valid partition
            printPartition(arr, k);
        }
        return;
    }

    for (int i = start; i <= j; i++)
    {
        arr[index] = i;
        generate(j - i, k, i , arr, index + 1);
    }
}

int main()
{
    int j, k;
    printf("Enter a j: ");
    scanf("%d", &j);
    printf("Enter a k: ");
    scanf("%d", &k);

    int arr[k];
    generate(j, k, 0, arr, 0);
}