#include <stdio.h>
#include <math.h>

double sine(double angle);
long int factorial(int n);

int main()
{
    int degrees; //angle value in degrees
    double radians; //angle value in radians
    printf("What angle would you like to find the sine of? ");
    scanf("%d", &degrees);
    radians = M_PI * degrees / 180;
    printf("sin(%d˚) is %f\n", degrees, sine(radians));
}

double sine(double radians)
{
    double sine;
    for (int i = 0; i < 4; i++)
    {
        sine += pow(-1, i) * pow(radians, 2 * i + 1) / factorial(2 * i + 1);
    } //this is a bit inefficient since we are computing the factorials completely new each time
    return sine;
}

long int factorial(int n) //recursive factorial function
{
    if (n == 0) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}
