#include <stdio.h>

int main()
{
    // ! Size of Data Type

    printf("Integer = %lu\n", sizeof(int));
    printf("Float = %lu\n", sizeof(float));
    printf("Double = %lu\n", sizeof(double));
    printf("Character = %lu\n", sizeof(char));

    // ? The %lu format specifer to print the result, instead of %d. It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.

    return 0;
}