#include <stdio.h>

int main()
{
    // ! Type Conversion & Type Coercion

    // ? 1. Type Coercion

    // * 1.1 Implicit Conversion

    /*
    Implicit type conversion is performed automatically by the compiler when a value of one data type is assigned to a variable of another data type. It's also known as "coercion." Implicit type conversion usually occurs when the destination data type can represent all possible values of the source data type without loss of information.
    */

    int a = 10;
    float b;
    b = a; // Implicit conversion from int to float

    // * 1.2 Explicit Conversion

    /*
    Explicit type conversion is performed explicitly by the programmer using casting operators. This is useful when the programmer wants to ensure a specific type of conversion or when there might be a loss of data during conversion.
    */

    b = 10.5;
    a;
    a = (int)b; // Explicit conversion from float to int

    // ? 2. Type Coercion

    /*
    Type coercion refers to the implicit conversion of data types during expressions or operations. It occurs when values of different data types are used together in an expression, and the compiler automatically converts one of the values to a compatible type so that the operation can be performed.
    */

    a = 10;
    b = 5.5;
    float result;
    result = a + b; // Type coercion: int a is promoted to float

    return 0;
}