#include <stdio.h>
#include <math.h>

int main()
{
    int dec, oct = 0, power = 0;
    printf("Number to conver to octal: ");
    scanf("%d", &dec); //take input number
    for (power = log2(dec) / 3; power > 0; power--) { //loop until we get down to < 8
        while (pow(8, power) <= dec) //add one until we've exhausted this 8's place
        {
            oct++;
            dec -= pow(8, power);
        }
        oct *= 10; //shift the place of all numbers
    }
    oct += dec;
    printf("That number in octal is %d", oct);
}