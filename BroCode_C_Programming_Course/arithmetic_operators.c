#include <stdio.h>

int main(void) {
    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus) - gives you the remainder of a division
    // ++ (increment)
    // -- decrement

    int x = 5;
    int y = 2;

    int z = x * y;

    // for the division : you need to use a float as the result and at least one float for one of the two numbers, either by
    // using float directly as a variable or typecasting

    float z2 = x / (float) y;

    printf("%d\n", z);
    printf("%f\n", z2);


    return 0;
}