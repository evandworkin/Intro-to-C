#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float sum = 0, curr;
    while (curr != 0) {
        printf("Enter a number to add, or 0 to quit: ");
        scanf("%f", &curr);
        sum += curr;
        printf("The sum is now %.2f.\n\n", sum);
    }
}