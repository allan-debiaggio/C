#include <stdio.h>

void hello(char[], int); // function prototype

int main()
{
    // function prototype

    // WHAT IS IT ?
    // Function declaration, without a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGE
    // 1. Easier to navigate a program with main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files

    char name[] = "Bro";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}