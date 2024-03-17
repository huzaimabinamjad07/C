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

    printf("%s\n", str); //  %s -> (Used to print string)

    // ? 5. Access one charcter of string

    printf("Character at index 1 = %c\n", str[1]);

    // ? 6. Modify one character of string

    str[1] = 'b';
    printf("Character at index 1 = %c\n\n", str[1]);

    // ? 7. Loop through a string

    printf("%lu\n", sizeof(str));

    for (int i = 0; i < sizeof(str); i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}