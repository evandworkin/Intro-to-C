#include <stdio.h>

void printArray(int matrix[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", matrix[i][j]);
        }
        printf("%d]\n", matrix[i][3]);
    }
}

void func(int[4][4]);

int main()
{
    int matrix[4][4] = {0};
    for (int i = 0; i < 16; i++)
    {
        printf("\nInitialize element (%d, %d):\n", i / 4, i % 4);
        printArray(matrix);
        scanf("%d", &matrix[i / 4][i % 4]);
    }
    printf("\nThe array is:\n");
    printArray(matrix);

    func(matrix);
    printf("\nFirst row:\n[");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", matrix[0][i]);
    }
    printf("%d]\n", matrix[0][3]);
}

void func(int matrix[4][4])
{
    int product = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            product *= *(*(matrix + j) + i);
        }
        *(*(matrix) + i) = product;
        product = 1;
    }
}