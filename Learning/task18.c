#include <stdio.h>

int main()
{
    // ! Pointer & Array

    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;

    // &arr & ptr = same => pointer initializes at initial block => sizeof(ptr) = 4

    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}