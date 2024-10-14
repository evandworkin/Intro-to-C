#include <stdio.h>

int main() {
    char str[100];
    printf("Input a string: ");
    scanf("%99[^\n]", str); //read a string (can also use gets())

    int length = 0;
    while (str[length] != '\0') length++; //gets length of string (can also use strlen())

    int palindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }
    if (palindrome == 1) {
        printf("\"%s\" is a palindrome!\n", str);
    } else {
        printf("\"%s\" is not a palindrome!\n", str);
    }

    return 0;
}