// Question 1: E

// Question 2: k = 0b00100000 = 32

#include <stdio.h>

void question3();

void question4();
void times11(float*, float*);

void question5();
float myCos(float);

void question6();
void displayMenu();

int main()
{
    // question3();
    // question4();
    question5();
    // question6();
}

void question3()
{
    printf("\n***QUESTION 3***\n");
    int counter, test;
    printf("Please enter an upper bound for the counter (50 to 500): ");
    scanf("%d", &counter);
    printf("Please enter a test integer (2 to 9): ");
    scanf("%d", &test);
    printf("\n");
    for (int i = 0; i <= counter; i++)
    {
        if (i % test == 0) printf("%d is an integer multiple of %d\n", i, test);
    }
    printf("There were %d total interger multiples of %d from 0 to %d\n", (counter / test) + 1, test, counter);
}

void question4()
{
    printf("\n***QUESTION 4***\n");
    float a, b;
    float *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Please enter a value for the first float: ");
    scanf("%f", pa);
    printf("Please enter a value for the second float: ");
    scanf("%f", pb);
    times11(pa, pb);
    printf("The numbers are now %.2f and %.2f, respectively\n", *pa, *pb);
    // i rounded the numbers to 2 decmial places for readability
}

void times11(float *x, float *y)
{
    *x *= 11;
    *y *= 11;
}

void question5()
{
    printf("\n***QUESTION 5***\n");
    int deg1, deg2;
    int done = 0;
    while (!done) {
        done = 1;
        printf("Please enter a value for the first angle (in degrees): ");
        scanf("%d", &deg1);
        printf("Please enter a value for the second angle (in degrees): ");
        scanf("%d", &deg2);
        if (deg2 < deg1) 
        {
            printf("The second angle measure must be greater than the first.\n");
            done = 0;
        }
        if (deg1 < 0 || deg1 > 180 || deg2 < 0 || deg2 > 180)
        {
            printf("The angles must both be between 0 and 180 degrees\n");
            done = 0;
        }
    }

    float A, B;
    double integral; // using a double becuase there was an underflow/overflow error when i used float
    for (int i = deg1; i < deg2; i++)
    {
        A = myCos(i * 0.01745);
        B = myCos((i + 1) * 0.01745);
        integral += 0.01745 * (A + B) * 0.5;
    }
    printf("The integral of cos(x) from x = %d degrees to x = %d degrees is %f\n", deg1, deg2, integral);
}

float myCos(float radians)
{
    return 1 - (radians * radians / 2) + (radians * radians * radians * radians / 24) - (radians * radians * radians * radians * radians * radians / 720);
}

void question6()
{
    printf("\n***QUESTION 6***\n");
    int selection;
    int espresso = 0, latte = 0, cappuccino = 0, mocha = 0;
    int done = 0;
    int order_placed = 0;
    while (!done) 
    {
        displayMenu();
        printf("Enter the number of the coffee you would like to order: ");
        scanf("%d", &selection);
        switch (selection)
        {
            case 1:
                printf("How many espressos would you like to order? ");
                scanf("%d", &espresso);
                break;
            case 2:
                printf("How many lattes would you like to order? ");
                scanf("%d", &latte);
                break;
            case 3:
                printf("How many cappuccinos would you like to order? ");
                scanf("%d", &cappuccino);
                break;
            case 4:
                printf("How many mochas would you like to order? ");
                scanf("%d", &mocha);
                break;
            case 5: 
                done = 1;
                order_placed = 1;
                break;
            case 6:
                done = 1;
                break;
            default:
                printf("You did not enter a valid number.\n");
        }
    }
    if (order_placed)
    {
        float cost = espresso * 2.5 + latte * 3.0 + cappuccino * 3.5 + mocha * 4.0;
        printf("The total cost of your %d espresso(s), %d latte(s), %d cappuccino(s), and %d mocha(s) is $%.2f\n", espresso, latte, cappuccino, mocha, cost);
    } else { // if no order was placed, meaning the user input a 6 to exit
        printf("You did not place an order\n");
    }
    printf("Come again soon!\n");
}

void displayMenu() {
    printf("Coffee Menu:\n");
    printf("1. Espresso - $2.50\n");
    printf("2. Latte - $3.00\n");
    printf("3. Cappuccino - $3.50\n");
    printf("4. Mocha - $4.00\n");
    printf("5. Place Order\n");
    printf("6. Exit\n");
}
