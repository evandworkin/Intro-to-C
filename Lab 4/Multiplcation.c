#include <stdio.h>

int main()
{
    long x, y;
    long result = 0;
    printf("Gimme an x: ");
    scanf("%ld", &x);
    printf("Gimme a y: ");
    scanf("%ld", &y);
    while (x > 0)
    {
        if (x & 1) //least significant bit is 1
        {
            result += y;
        }
        x >>= 1;
        y <<= 1;
    }
    printf("The product of those two numbers is %ld", result);
}