#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int test;
    printf("What number would you like to test parity? ");
    scanf("%d", &test);
    printf("%d is ", test);
    if (test % 2) printf("odd\n");
    else printf("even\n");
}
