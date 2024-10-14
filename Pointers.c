#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sine_array(float []);

int main()
{
    int *stuff; // creates an integer pointer
    int things; // cretes an integer
    stuff = &things; // now stuff points to things (which is currenty empty)
    *stuff = 7; // this is called dereferncing, it puts the value into what stuff points to (things)
    printf("Things: %d\n", things);
    printf("Stuff: %d\n", *stuff);

    int *p, i;
    p = &i;
    printf("Enter a number: ");
    scanf("%d", p);
    printf("You entered: %d\n", i);
    printf("You entered: %d\n", *p);


    float sines[180];
    sine_array(sines);
    for (int i = 0; i < 180; i++) {
        printf("sin(%d) = %.4f\n", i, sines[i]);
    }
}

void sine_array(float s[])
{
    float dr, *arr_ptr;

    arr_ptr = s;

    for (int j = 0; j < 180; j++)
    {
        dr = (float) j * 0.0174;
        *(arr_ptr + j) = sin(dr);
    }
}



