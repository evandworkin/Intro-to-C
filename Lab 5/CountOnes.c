#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number in decimal: ");
    scanf("%d", &a);
    int count = 0;
    while (a)
    {
        if (a & 1) count++;
        a >>= 1;
    }
    printf("Your number's binary representation contains %d ones", count);
}