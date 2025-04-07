#include <stdio.h>

int main(){
    printf("Hello, World !\n"); // This is a comment
    printf("I really like pizza !\n");
    /*
    Everything else
    under here
    is a comment
    (multiline comment)    
    */

    /*
    Escape sequence = character combination consisting of a backslash
    "\" followed by a letter or combination of digits.
    They specify actions within a line or string of text.
    \n = newline
    \t = tab
    */

    /* Put a backslash behind a special character for it to appear in a string (here the quotes, but for adding a)
    readable backslash for example you need to put two of them "\\"
    */
    printf("\"I like Pizza\" - Abraham Lincoln probably");

    return 0;
}