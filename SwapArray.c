#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a[10];
    a[5] = 5; // equivalent to *(a + 5) = 5
    *(a + 6) = 6; // equivalent to a[6] = 6

    printf("Before swap: %d, %d\n", *(a + 5), a[6]);

    swap(&a[5], &a[6]);

    printf("After swap: %d, %d\n", *(a + 5), a[6]);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
