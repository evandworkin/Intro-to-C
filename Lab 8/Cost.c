#include <stdio.h>

int main()
{
    int units;
    printf("How many units were consumed? ");
    scanf("%d", &units);

    float cost = 0.0;
    if (units > 200)
    {
        cost += .8 * 200;
        units -= 200;
        printf("Your first 200 units cost you $%.2f. ", cost);
    } else {
        cost += .8 * units;
        printf("Your %d units cost you $%.2f. ", units, units * .8);
        units = 0;
    }

    if (units > 100) 
    {
        cost += .9 * 100;
        printf("Your next 100 units cost you $90.00. ");
        units -= 100;
    } else if (units != 0) {
        cost += .9 * units;
        printf("Your next %d units cost you $%.2f. ", units, .9 * units);
        units = 0;
    }
    if (units > 0) 
    {
        printf("Your remaining %d units cost you $%.2f. ", units, units * 1.0);
    }
    cost += units;

    if (cost > 400)
    {
        printf("There was a surcharge of $%.2f for going over $400.", cost * .15);
        cost *= 1.15;
    }
    printf("\n");

    if (cost < 100)
    {
        printf("You did not meet the minimum charge of $100, so your total bill is $100\n");
    } else {
        printf("Your total bill is $%.2f\n", cost);
    }
}