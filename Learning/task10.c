#include <stdio.h>

int main()
{
    // ! Loops

    // ? 1. For Loop

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // ? 2. While Loop

    int i = 1;

    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // ? 3. Do-While Loop

    i = 1;

    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}