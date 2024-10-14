#include <stdio.h>

int occurances(int arr[], int val);

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 5, 6, 6};
    int val = 4;
    printf("%d occurs %d times\n", val, occurances(arr, val));
}

int occurances(int arr[], int val)
{
    int count = 0;
    for (int i = 0; arr[i] <= val; i++) // if i is out of range, (arr[i] <= val) will always be 0 (false)
    {                                   // not sure exactly what it's doing. it might be possible that it's referencing the next integer-size data slot, which could actually be val...
        if (arr[i] == val) count++;
    }
    return count;
}