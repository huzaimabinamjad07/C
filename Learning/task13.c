#include <stdio.h>

int main()
{
    // ! Strings

    // ? 1. Declaring a string (size is required);

    // char str[10];

    // ? 2. Declaring & Initializing a string (size not required)

    char str[] = "Hello World";

    // ? 3. Another method of declaring & initializing

    // char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

    // ? 4. Print value of string

    printf("%s", str); //  %s -> (Used to print string)

    return 0;
}