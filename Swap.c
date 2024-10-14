#include <stdio.h>
#include <stdlib.h>

void badSwap(int a, int b);
void swap(int *pA, int *pB);

int main()
{
    int a, b;
    a = 10;
    b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    badSwap(a, b);
    printf("After bad swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
}

void badSwap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(int *pA, int *pB)
{
    int temp;

    temp = *pA;
    *pA = *pB;
    *pB = temp;
}