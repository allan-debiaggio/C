#include <stdio.h>

int main() 
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a); // Displaying the address of the variable (%p is the format specifier for addresses)
    printf("%p\n", &b); // and using &(address-of operator) and the variable's name
    printf("%p\n", &c); 


    return 0;
}