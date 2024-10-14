#include <stdio.h>

void reverse(int k[], int start, int end);

int main()
{
    int k[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(k) / sizeof(k[0]);
    int shiftby;
    printf("How much we shifting by? ");
    scanf("%d", &shiftby);
    shiftby %= size;

    reverse(k, 0, size - 1);
    reverse(k, 0, shiftby - 1);
    reverse(k, shiftby, size - 1);
    printf("[");
    for (int i = 0; i < 7; i++)
    {
        printf("%d, ", k[i]);
    }
    printf("%d]\n", k[7]);
}

void reverse(int k[], int start, int end)
{
    int a;
    int i = start;
    int j = end;
    while (i < j)
    {
        a = k[i];
        k[i] = k[j];
        k[j] = a;
        i++;
        j--;
    }
}