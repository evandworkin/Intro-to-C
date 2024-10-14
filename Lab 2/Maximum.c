#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[] = {1, 20, 14, 2, 99, 30};
    int max = array[0];
    for (int i = 1; i < sizeof(array) / sizeof(array[0]); i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    printf("The maximum number is %d\n", max);
}