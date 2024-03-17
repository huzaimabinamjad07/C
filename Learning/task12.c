#include <stdio.h>

int main()
{
    // ! Arrays

    // ? 1. Create an array of size = 5

    int arr[5];

    // ? 2. Assign values to each block in array

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    // ? 3. Print all values of array using loop

    printf("{ ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b }\n");

    // ? 4. Get size of array

    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array = %d\n", sizeOfArray);

    // ? 5. Create a 2D array and print it

    // * Declaring 2D Array
    int temp[3][3];
    int value = 1;

    // * Assigning values to the blocks

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = value++;
        }
    }

    // * Traversing through array and printing values to the console

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}