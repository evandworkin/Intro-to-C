#include <stdio.h>

void swapByValue(int a, int b);
void swapByReference(int *a, int *b);

int main()
{
    int a = 1, b = 2;
    swapByValue(a, b);
    swapByReference(&a, &b);
    printf("\nAfter all swaps: a = %d, b = %d\n", a, b);
}

void swapByValue(int a, int b)
{
    printf("Within swapByValue, before swap: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("Within swapByValue, after swap: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b)
{
    printf("Within swapByReference, before swap: a = %d, b = %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Within swapByReference, after swap: a = %d, b = %d\n", *a, *b);
}
