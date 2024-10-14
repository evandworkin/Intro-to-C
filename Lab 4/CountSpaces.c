#include <stdio.h>

int main()
{
    char str[100];
    printf("Gimme a string, boy\n");
    fgets(str, 100, stdin);
    int spaces = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ') spaces++;
    }
    if (spaces == 1)
    {
        printf("Your string contained 1 space");
    } else {
        printf("Your string contained %d spaces", spaces);
    }
}