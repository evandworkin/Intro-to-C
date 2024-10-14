#include <stdio.h>

float calculateAverage(int a, int b);

int main()
{
    int a, b;
    printf("Gimme an a: ");
    scanf("%d", &a);
    printf("Gimme a b: ");
    scanf("%d", &b);
    printf("The average is %.1f", calculateAverage(a, b));
}

float calculateAverage(int a, int b)
{
    return (a + b) / 2.;
}