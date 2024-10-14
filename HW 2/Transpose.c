#include <stdio.h>

void transpose(int [][2]);

int main()
{
    int matrix[2][2] = {{0, 0}, {0, 0}};
    for (int i = 0; i < 4; i++)
    {
        printf("\nPopulate the matrix:\n[%d, %d]\n[%d, %d]\n\n", matrix[0][0], matrix[0][1], matrix[1][0], matrix[1][1]);
        scanf("%d", &matrix[i / 2][i % 2]);
    }
    printf("\nThe matrix is:\n[%d, %d]\n[%d, %d]\n\n", matrix[0][0], matrix[0][1], matrix[1][0], matrix[1][1]);
    transpose(matrix);
    printf("It's transpose is:\n[%d, %d]\n[%d, %d]\n\n", matrix[0][0], matrix[0][1], matrix[1][0], matrix[1][1]);
}

void transpose(int matrix[][2])
{
    int temp = *(*(matrix + 0) + 1); // a different way to dereference the 2D matrix
    matrix[0][1] = matrix[1][0];
    matrix[1][0] = temp;
}