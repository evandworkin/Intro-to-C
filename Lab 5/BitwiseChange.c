#include <stdio.h>

int main()
{
    int a, b;
    a = 0b01010111;
    scanf("%d", &a);
    b = 0b10111011;
    printf("%d\n", a&b);
}