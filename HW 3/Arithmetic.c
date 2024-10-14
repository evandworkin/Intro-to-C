#include <stdio.h>

int add(int, int);
int sub(int, int);
int mult(int, int);
int arith(int, int, int (*f)(int, int));

int main()
{
    int (*addition)(int, int) = add;
    int (*subtraction)(int, int) = sub;
    int (*multiplcation)(int, int) = mult;
    
    int a, b;
    printf("Enter an a: ");
    scanf("%d", &a);
    printf("Enter a b: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, arith(a, b, addition));
    printf("%d - %d = %d\n", a, b, arith(a, b, subtraction));
    printf("%d * %d = %d\n", a, b, arith(a, b, multiplcation));
}

int arith(int a, int b, int (*f)(int, int))
{
    return f(a, b);
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}