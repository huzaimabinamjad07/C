#include <stdio.h>

int main()
{
    // ! Decimal Precison

    float value = 30.323894;

    // ? 1. %f -> Default
    printf("%%f = ");
    printf("%f\n", value);

    // ? 2. %.1f -> Prints only upto one decimal point
    printf("%%.1f = ");
    printf("%.1f\n", value);

    // ? 3. %.2f -> Prints only upto two decimal points
    printf("%%.2f = ");
    printf("%.2f\n", value);

    // ? 4. %.4f -> Prints only upto four decimal points
    printf("%%.4f = ");
    printf("%.4f\n", value);

    return 0;
}