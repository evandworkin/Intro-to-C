#include <stdio.h>

int main()
{
    int counter = 0, val = 1000;
    while (1)
    {
        if (++counter == val) break;
    }
    printf("%d\n", counter);
}