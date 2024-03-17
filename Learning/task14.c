#include <stdio.h>
#include <string.h>

int main()
{
    // ! String Functions (require <string.h> library)

    char str[] = "Hello World";

    // ? 1. strlen -> Returns count of total characters (excluding null (\0) character)

    printf("Lenght = %d\n", strlen(str));

    // ? 2. strcat -> Join two strings

    char str1[] = "Tony ";
    char str2[] = "Stark";

    strcat(str1, str2);

    printf("Concat = %s\n", str1);

    // ? 3. strcpy -> Copy one string into another

    char original[] = "Pakistan";
    char copy[] = "";

    strcpy(copy, original);

    printf("Copy = %s\n", copy);

    // ? 4. ctrcmp -> Compare two strings and return integer value => 1 = equal => else = not equal

    char one[] = "Hi";
    char two[] = "Hi";
    char three[] = "Hey";

    printf("Compare = %d\n", strcmp(one, three));

    return 0;
}