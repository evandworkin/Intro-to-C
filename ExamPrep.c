#include <stdio.h>

void swap(int*, int*);

int main()
{
    int a;
    int *b = &a;
    float c;
    long int *d;

    printf("Please enter a value of a (int): ");
    scanf("%d", &a);
    printf("You entered %d, which is the same as %d\n", a, *b);
    *b = 6093824;
    printf("You (probably) didn't enter %d, which is the same as %d\n", a, *b);

    printf("Please enter a value of c (float): ");
    scanf("%f", &c);
    printf("You entered %.2f\n", c);

    printf("Please enter a value of d (long int): ");
    scanf("%ld", d);
    printf("You entered %ld\n", *d);

    printf("1");
    int x = 1;
    printf("2");
    int *y;
    printf("3");
    *y = 5;
    printf("4");

    printf("Before swap (x, y) = (%d, %d)", x, *y);
    swap(&x, y);
    printf("After swap (x, y) = (%d, %d)", x, *y);

}

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}