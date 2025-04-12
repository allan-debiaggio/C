#include <stdio.h>

int main() {
    /*
    Variable = Allocated space in memory to store a value.
    We refefer to a variable's name to access the stored value.
    That variable now behaves as if it was the value it contains.
    BUT we need to declare what type of data we are storing.
    */

    int x; // declaration
    x = 123; // initialization
    int y = 321; // declaration + 
    
    int age = 21; // integer
    float gpa = 2.05; // floating point number (gpa : grade point average)
    char grade = 'C'; // single character
    char name[] = "Bro"; // array of characters (for a string)


    // % is the special character to insert a variable, followed by the first letter of type
    printf("Hello %s\n", name); // here %s for String
    printf("You are %d years old\n", age); // %d for Decimal
    printf("Your average grade is %c\n", grade); // %c for Character
    printf("Your GPA is %f\n", gpa); // %f for Float
    

    return 0;
}