#include <stdio.h>
#include <math.h>

int main()
{
    int shape;
    printf("What shape would you like to find the area of?\n1: Circle\n2: Square\n3: Rectangle\n4: Triangle\n\n");
    scanf("%d", &shape);
    printf("-------------------------------\n\n");
    float a = 0.0;
    float b = 0.0;
    switch (shape)
    {
        case 1:
            printf("What is the radius of the circle?\n");
            scanf("%f", &a);
            printf("The area of a circle with radius %.2f is %.2f\n", a, M_PI * a * a);
            break;
        case 2:
            printf("What is the side length of the square?\n");
            scanf("%f", &a);
            printf("The area of a square with side length %.2f is %.2f\n", a, a * a);
            break;
        case 3:
            printf("What is the length of the rectangle?\n");
            scanf("%f", &a);
            printf("What is the width of the rectangle?\n");
            scanf("%f", &b);
            printf("The area of a rectangle with length %.2f and width %.2f is %.2f\n", a, b, a * b);
            break;
        case 4:
            printf("What is the base of the triangle?\n");
            scanf("%f", &a);
            printf("What is the height of the triangle?\n");
            scanf("%f", &b);
            printf("The area of a traingle with base %.2f and height %.2f is %.2f\n", a, b, .5 * a * b);
            break;
        default: printf("You didn't enter a valid number\n");
    }
}