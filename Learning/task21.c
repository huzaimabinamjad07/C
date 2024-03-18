#include <stdio.h>

int main()
{
    // ! File Handling

    FILE *ptr;

    // ? 1. Create a file => fopen("file_name.ext", "mode")
    // * Mode => w -> write, r -> read, a -> append

    // ptr = fopen("file.txt", "w");

    // fclose(ptr); // => close file

    // ? 2. Write data into a file => fprintf(file_ptr, "Data to write")

    // ptr = fopen("file.txt", "a");

    // fprintf(ptr, "This is second line text\n");

    // fclose(ptr);

    // ? 3. Read data from file into string (char[]) => fgets(variable, size, pointer)

    char arr[200];

    ptr = fopen("file.txt", "r");

    // fgets(arr, sizeof(arr), ptr); -> this reads only one line

    // while (fgets(arr, sizeof(arr), ptr))
    // {
    // This reads multiple lines
    //     printf("%s", arr);
    // }

    // printf("%s\n", arr);

    fclose(ptr);

    // ? 4. Check if file is available or not => ptr == NULL

    // ptr = fopen("newFile.txt", "r");

    // if (ptr == NULL)
    // {
    //     printf("File not found in directory");
    // }

    // fclose(ptr);

    return 0;
}