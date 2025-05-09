#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(void)
{
    // enum = a user defined type of named integer indentifiers
    // helps to make a program more readable / They are constants

    enum Day today = Sun;

    // printf("%d", today); // enums are NOT STRINGS, but they can be treated as int

    if(today == Sun || today == Sat)
    {
        printf("\nIt's the weekend ! Party time !");
    }
    else
    {
        printf("\nI have to work today :(");
    }

    return 0;
}