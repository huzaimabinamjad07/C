#include <stdio.h>

int main()
{
    // ! Conditional Statements

    // ? 1. If-Else Statement

    int age = 20;

    if (age < 0)
    {
        printf("Invalid Age!\n");
    }
    else if (age >= 18)
    {
        printf("You can Drive\n");
    }
    else
    {
        printf("You can't Drive\n");
    }

    // ? 2. Switch Statements

    char ch = 'i';

    switch (ch)
    {
    case 'a':
        printf("Vowel\n");
        break;
    case 'e':
        printf("Vowel\n");
        break;
    case 'i':
        printf("Vowel\n");
        break;
    case 'o':
        printf("Vowel\n");
        break;
    case 'u':
        printf("Vowel\n");
        break;

    default:
        printf("Consonant\n");
        break;
    }

    return 0;
}