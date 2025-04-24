#include <stdio.h>

int main(void)
{
    // BITWISE OPERATORS = special operators used in bit level programming
    // (knowing binary is important for this topic)

    // & = AND              Both
    // | = OR               One of or all
    // ^ = XOR              Only one of
    // << = left shift      moves all the bits to the left, with an argument as the count
    // >> = right shift     moves all the bits to the right, with an argument as the count

    int x = 6; // 6     = 0000 0110
    int y = 12; // 12   = 0000 1100
    int z = 0; // 0     = 0000 1100

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("eXclusive OR = %d\n", z);

    z = x << 2;
    printf("integer x Left shift of 2 = %d", z);

    z = x >> 1;
    printf("integer x Right shift of 1 = %d", z);

    return 0;
}