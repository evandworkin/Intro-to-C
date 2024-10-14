#include <stdio.h>

int main()
{
    float mark;
    printf("What grade did you get? ");
    scanf("%f", &mark);
    if (mark >= 60)
    {
        if (mark >= 70)
        {
            if (mark >= 80)
            {
                if (mark >= 90) {
                    printf("Your letter grade is an A\n");
                } else {
                    printf("Your letter grade is a B\n");
                }
            } else {
                printf("Your letter grade is a C\n");
            }
        } else {
            printf("Your letter grade is a D\n");
        }
    } else {
        printf("Your letter grade is an F\n");
    }
}