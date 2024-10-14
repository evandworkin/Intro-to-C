#include <stdio.h>
#include <string.h>


int main() {
    char string[100];
    printf("Input a string: ");
    scanf("%99[^\n]", string); //read a string (can also use gets())

    for (int i = 0; string[i] != '\0'; i++) { //iterate through the string
        for (int j = i + 1; string[j] != '\0';) {
            if (string[i] == string[j]) {
                //if we have a repeated character, shift the rest of the string over
                for (int k = j; string[k] != '\0'; k++) {
                    string[k] = string[k + 1];
                }
            } else {
                j++;
            }
        }
    }
    printf("String after removing repeated characters: %s\n", string);
}