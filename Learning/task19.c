#include <stdio.h>

void print()
{
    // ? void means return nothing at the end of function

    printf("Hello World\n");
}

float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int greater(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

int oddSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    // ! Functions

    printf("Average = %f\n", average(4.8, 5.3, 6.5));
    printf("Greater = %d\n", greater(4, 9));
    printf("Odd Sum = %d\n", oddSum(10));

    return 0;
}