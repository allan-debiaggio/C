// Input a number and compute its factorial

#include <stdio.h>

int factorial(int num);

int main (void)
{
    int num = 0;

    printf("Give me an integer : ");
    scanf(" %d", &num);
    printf("Factorial %d = %d", num, factorial(num));


    return 0;
}

int factorial(int num)
{
    for(int i = num - 1; i > 0; i--)
    {
        num *= i;
    }    
    return num;
}