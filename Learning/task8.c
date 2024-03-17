#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ! Boolean (True / False)

    // ? Required special library <stdbool.h>

    bool isAlive = true;
    bool isEating = false;

    printf("Alive = %d\n", isAlive);   // 1 = True
    printf("Eating = %d\n", isEating); // 2 = False

    return 0;
}