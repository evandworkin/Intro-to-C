#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x, y;
    printf("Can I have a number please: ");
    scanf("%d", &x);
    printf("Can I have another number please: ");
    scanf("%d", &y);

    printf("x was %d and y was %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("x is now %d and y is %d\n", x, y);
}
