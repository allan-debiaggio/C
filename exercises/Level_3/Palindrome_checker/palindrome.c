// Check if an input string is a palindrome

#include <stdio.h>

char palindrome(char text[]);

int main(void)
{
    char text[255] = "";
    printf("Enter a string of text : ");
    fgets(text, 255, stdin);
    printf("%s", text);

    return 0;
}

char palindrome(char text[])
{
    
}