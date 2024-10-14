#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int rows;
    printf("Enter a number of rows: ");
    scanf("%d", &rows); //read a number of rows
    for (int i = 1; i <= rows; i++) { //i is each row
        for (int j = 1; j <= i; j++) { //j goes through each number in the row
            printf("%d ", j);
        }
        printf("\n");
    }
}