#include <stdio.h>
#include <string.h> // Needed to work with strings

int main(void) {

    char name[25]; // size in bytes
    int age;

    // The scanf function is used to get user input, and needs a format specifier and the name of the variable
    // preceded by address-of operator "&" to get the address of variable

    printf("What's your name ?\n");
    // scanf("%s", &name); // & = address-of operator, needed to change the value of the variable
    fgets(name, 25, stdin); // 25 is the size of the array used earlier
    // fgets is used to have an input with white spaces, because scanf won't work with them.
    // first argument / parameter is the variable name without address-of operator "&"
    // second argument here is the size of the array of character
    // third argument is the function "stdin" for standard input*
    name[strlen(name)-1] = '\0'; // This is used to specify where the strings ends, here the new line character

    printf("How old are you ?\n");
    scanf("%d", &age); // & = address-of operator, needed to change the value of the variable

    printf("Hello %s,\n", name);
    printf("You are %d years old", age);

    return 0;
}