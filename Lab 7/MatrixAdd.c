#include <stdio.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];

    for (int i = 0; i < 9; i++) // populate arr1
    {
        printf("arr1[%d][%d] = ", i / 3, i % 3);
        scanf("%d", &arr1[i / 3][i % 3]);
    }

    for (int i = 0; i < 9; i++) // populate arr2
    {
        printf("arr2[%d][%d] = ", i / 3, i % 3);
        scanf("%d", &arr2[i / 3][i % 3]);
    }

    for (int i = 0; i < 9; i++) // calculate the sum
    {
        sum[i / 3][i % 3] = arr1[i / 3][i % 3] + arr2[i / 3][i % 3];
    }
    // print the sum
    printf("Sum: ");
    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0) printf("\n");
        printf("%d, ", sum[i / 3][i % 3]);
    }
    printf("\n");
}