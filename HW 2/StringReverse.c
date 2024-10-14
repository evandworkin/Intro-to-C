#include <stdio.h>

void reverse(char *);
void swap(char *, int, int);

int main()
{
    printf("Insert a string:\n");
    char s[100];
    fgets(s, 100, stdin);
    reverse(s);
    printf("%s\n", s);
}

void reverse(char *s)
{
    int size;
    for (size = 0; s[size] != '\0'; size++);
    int i = 0, j = size - 1;
    while (i < j)
    {
        swap(s, i, j);
        i++;
        j--;
    }
}

void swap(char *s, int a, int b)
{
    int temp = *(s + a); // trying to showcase different ways of dereferencing
    *(s + a) = s[b];
    *(s + b) = temp;
}