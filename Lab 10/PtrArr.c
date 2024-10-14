#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*arr)[10] = malloc(sizeof(int[10]));
    int a = 0, b = 1, c = 2, d = 3, e = 4, f = 5, g = 6, h = 7, i = 8, j = 9;
    *arr[0] = a;
    *arr[1] = b;
    *arr[2] = c;
    *arr[3] = d;
    *arr[4] = e;
    *arr[5] = f;
    *arr[6] = g;
    *arr[7] = h;
    *arr[8] = i;
    *arr[9] = j;
    for (int k = 0; k < 10; k++)
    {
        printf("%d, ", *arr[k]);
    }
    printf("\n");
    return 0;
}