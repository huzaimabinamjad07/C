#include <stdio.h>

int main()
{
    // ! Break & Continue

    // ? 1. Break -> Used to exit current loop

    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            // * This loop will only print (1 2)
            break;
        }

        printf("%d ", i);
    }
    printf("\n");

    // ? 2. Continue -> Used to skip code in remaining loop after continue statement and run next iteration

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            // * This loop will only print odd numbers
            continue;
        }

        printf("%d ", i);
    }
    printf("\n");

    return 0;
}