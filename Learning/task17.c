#include <stdio.h>

int main()
{
    // ! Pointer

    // ? "A special variable which stores memory address of variable"

    int age = 19; // Simple variable of integer

    printf("===== Variable =====\n\n");

    printf("age = %d\n", age);     // Print value of age
    printf("&age = %p\n\n", &age); // Print address of age

    printf("===== Pointer =====\n\n");

    int *ptr1 = &age; // Pointer variable of type integer

    printf("*ptr = %d\n", *ptr1);   // Print value of age through ptr1
    printf("ptr = %p\n", ptr1);     // Print value of ptr1 / address of age
    printf("&ptr = %p\n\n", &ptr1); // Print address of ptr1 itself

    printf("===== Pointer-of-Pointer =====\n\n");

    int **ptr2 = &ptr1; // Pointer storing address of another pointer

    printf("*ptr2 = %p\n", *ptr2); // Print address of age stored by ptr1
    printf("ptr = %p\n", ptr2);    // Print value of ptr2 / address of ptr1
    printf("&ptr = %p\n", &ptr2);  // Print address of ptr2

    return 0;
}