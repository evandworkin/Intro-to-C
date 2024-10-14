#include <stdio.h>

void method1(char str[]);
void method2();

int main()
{
    // char str[100];
    // printf("Please enter a string: ");
    // fgets(str, 100, stdin);
    char str[] = "aabbc";
    method1(str);
    // method2();
}

void method1(char str[])
{
    int count_most = 0, count_second = 0, count_checking;
    char most = str[0], second = str[0], checking;

    while (str[0] != '\0')
    {
        count_checking = 0;
        checking = str[0];
        // printf("Now checking: %c\nThe remaining string is: ", checking);
        for (int i = 0; str[i] != '\0';)
        {
            if (str[i] == checking)
            {
                //remove that element and shift everything down 1, and update the counter
                for (int j = i; str[j] != '\0'; j++)
                {
                    str[j] = str[j + 1];
                }
                count_checking += 1;
            } else {
                i++;
            }
        }
        // puts(str);
        //do some logic to update the most common and second most common chars and their counts
        if (count_checking > count_second)
        {
            if (count_checking == count_most);
            else if (count_checking > count_most)
            {
                count_second = count_most;
                count_most = count_checking;
                second = most;
                most = checking;
            } else {
                count_second = count_checking;
                second = checking;
            }
        }
    }
    if (most == second) {
        count_second = count_most;
    }

    printf("The most common character in that string was '%c' with %d occurances.\n", most, count_most);
    printf("The second most common character in that string was '%c' with %d occurances.\n", second, count_second);
}

void method2()
{
    // char str[100];
    // printf("Please enter a string: ");
    // fgets(str, 100, stdin);
    char str[] = "Welcome to the class of Introduction to programming in C";
    int count[200] = {0};
    printf("%c\n", str[0]);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }
    int count_most = 0, count_second = 0;
    char most, second;
    for (int i = 0; i < 200; i++)
    {
        // printf("%c: %d\n", i, count[i]);
        if (count[i] > count_second)
        {
            if (count[i] == count_most);
            else if (count[i] > count_most)
            {
                count_second = count_most;
                count_most = count[i];
                second = most;
                most = i;
            } else {
                count_second = count[i];
                second = i;
            }
        }
    }
    
    printf("The most common character in that string was '%c' with %d occurances.\n", most, count_most);
    printf("The second most common character in that string was '%c' with %d occurances.\n", second, count_second);
}