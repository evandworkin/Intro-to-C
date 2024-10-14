#include <stdio.h>

int main()
{
    int *ptr[10];
    int a, b, c, d, e, f, g, h, i, j;
    a = 5;
    b = 2;
    c = 7;
    d = 8;
    e = 1;
    f = 4;
    g = 9;
    h = 3;
    i = 6;
    j = 0;

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    ptr[3] = &d;
    ptr[4] = &e;
    ptr[5] = &f;
    ptr[6] = &g;
    ptr[7] = &h;
    ptr[8] = &i;
    ptr[9] = &j;

    printf("Initial array (unsorted):\n");
    printf("[%d", *ptr[0]);
    for (int i = 1; i < 10; i++)
    {
        printf(", %d", *ptr[i]);
    }
    printf("]\n");

    // insertion sort
    int* temp;
    int max_index;
    for (int i = 0; i < 10; i++)
    {
        max_index = 0;
        for (int j = 0; j < 10 - i; j++)
        {
            if (*ptr[j] > *ptr[max_index])
            {
                max_index = j;
            }
        }
        temp = ptr[9 - i];
        ptr[9 - i] = ptr[max_index];
        ptr[max_index] = temp;
    }

    printf("Final array (sorted):\n");
    printf("[%d", *ptr[0]);
    for (int i = 1; i < 10; i++)
    {
        printf(", %d", *ptr[i]);
    }
    printf("]\n");
}