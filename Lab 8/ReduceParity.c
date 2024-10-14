#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatrix(int rows, int cols, int matrix[][5])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d   ", matrix[i][j]);
        }
        printf("\n");
    }
}

void reduceByBracket(int rows, int cols, int matrix[][5])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] %= 2;
        }
    }
}

void reduceByPointer(int rows, int cols, int matrix[][5])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(*(matrix + i) + j) %= 2;
        }
    }
}

int main()
{
    srand(time(NULL));
    int matrix[2][5];
    for (int i = 0; i < 10; i++)
    { // populate the matrix
        matrix[i % 2][i / 2] = rand() % 10;
    }
    printf("Before reduction:\n");
    printMatrix(2, 5, matrix);
    reduceByPointer(2, 5, matrix);
    printf("\nAfter reduction:\n");
    printMatrix(2,5, matrix);
}