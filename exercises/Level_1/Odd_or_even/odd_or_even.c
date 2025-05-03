/*
Input a number and print whether it's even or odd
*/
#include <stdio.h>


int main(void)
{
    int number;

    printf("Give me an integer : ");
    scanf(" %d", &number);
    if(number % 2 == 0)
    {
        printf("This number is even");
    }
    else
    {
        printf("This number is odd");
    }

    return 0;
}