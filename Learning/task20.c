#include <stdio.h>
#include <math.h>

int main()
{
    // ! Math Functions

    // ? 1. sqrt(value) = Square Root

    printf("Square root of 10 = %f\n", sqrt(10));

    // ? 2. ceil(value), floor(value) = Round Functions

    printf("Ceil = %f\n", ceil(3.113928));
    printf("Floor = %f\n", floor(3.113928));

    // ? 3. pow(num, power) = Power Function

    printf("2^8 = %d\n", (int)pow(2, 8));

    return 0;
}