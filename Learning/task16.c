#include <stdio.h>

int main()
{
    // ! Memory Address

    int num = 10;

    // ? Print value of memory assigned to variable

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num); // %p -> used to print address value

    return 0;
}