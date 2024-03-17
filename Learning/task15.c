#include <stdio.h>

int main()
{
    // ! User input

    // ? 1. One Input

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number = %d\n", num);

    // ? 2. Multiple Inputs

    char ch;

    printf("Enter a number & a character:\n");
    scanf("%d %c", &num, &ch);

    printf("Number = %d\nCharacter = %c\n", num, ch);

    // ? 3. String Input (one word)

    char str[] = "";

    printf("Enter a string: ");
    scanf("%s", &str); // Reads only one work (not a line or multiple words)

    printf("String = %s\n\n", str);

    /*
    When you use scanf("%s", &str), it reads only a single word because %s reads until it encounters whitespace. So, if you enter multiple words separated by spaces, it will only take the first word and leave the rest in the input buffer.

    After the scanf() call, there's a newline character (\n) left in the input buffer. When you subsequently call fgets(), it reads this newline character as an empty line and stops reading further input, resulting in seemingly skipped input.

    To fix this issue, you need to clear the input buffer before calling fgets(). You can achieve this by consuming any remaining characters in the input buffer, including the newline character, using a loop like getchar().
    */

    // Clear input buffer
    while (getchar() != '\n');

    // ? 4. String Input (multiple words)

    char fullName[100];

    printf("Enter a string: ");
    fgets(fullName, sizeof(fullName), stdin); // Reads more than one word

    printf("String = %s\n", fullName);

    // ? 5. Decimal Input (same as integer)

    float f;

    printf("Enter float: ");
    scanf("%f", &f);

    printf("Float = %f\n", f);

    return 0;
}