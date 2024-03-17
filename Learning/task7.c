#include <stdio.h>

int main()
{
    // ! Operators

    int a = 25, b = 5;

    // ? 1. Arithmetic Operators

    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d\n\n", a--);

    // ? 2. Relational Operators

    printf("Relational Operators:\n");
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b : %d\n\n", a != b);

    // ? 3. Logical Operators

    printf("Logical Operators:\n");
    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a: %d\n", !a);

    // ? 4. Bitwise Operators

    printf("Bitwise Operators:\n");
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n\n", a << b);

    // ? 5. Assignment Operators

    printf("Assignment Operators:\n");
    printf("a = b: %d\n", a = b);
    printf("a += b: %d\n", a += b);
    printf("a -= b: %d\n", a -= b);
    printf("a *= b: %d\n", a *= b);
    printf("a /= b: %d\n", a /= b);
    printf("a %= b: %d\n", a %= b);
    printf("a &= b: %d\n", a &= b);
    printf("a |= b: %d\n)", a |= b);
    printf("a >>= b: %d\n", a >> b);
    printf("a <<= b: %d\n\n", a << b);

    // ? 6. Ternary Operator

    printf("Ternary Operator:\n");
    printf("(10 < 5) ? 10 : 20 = %d\n\n", (10 < 5) ? 10 : 20);

    // ? 7. Other Operators

    int num = 10;
    int *add_of_num = &num;

    printf("Other Operators:\n");
    printf("sizeof(num) = %d bytes\n", sizeof(num));
    printf("&num = %p\n", &num);
    printf("*add_of_num = %d\n", *add_of_num);
    printf("(float)num = %f\n", (float)num);

    return 0;
}