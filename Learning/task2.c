#include <stdio.h>

int main()
{
    /*
    ! Data Types

    ? 1. Integer (int)
    ? 2. Decimal (float, double)
    ? 3. ASCII (char)
    */

    // Todo: int -> 4 bytes -> %i, %d
    int i = 20;
    printf("Integer = %d\n", i);
    // printf("Integer = %i\n", i);

    // Todo: float -> 4 bytes -> %f
    float f = 3.14159;
    printf("Float = %f\n", f);

    // Todo: double -> 8 bytes -> %lf
    double d = 12312.32141;
    printf("Double = %lf\n", d);

    // Todo: char -> 1 byte -> %c
    char ch = 65; /* In ASCII, 65 = A */
    // char ch2 = 'A'; /* Acts same as ch */

    printf("Character = %c\n", ch);

    return 0;
}