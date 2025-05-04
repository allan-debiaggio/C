// Take three numbers and print the largest

#include <stdio.h>

int largest (int num1, int num2, int num3);

int main (void)
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Give me the first number : ");
    scanf(" %d", &num1);
    printf("Give me the second number : ");
    scanf(" %d", &num2);
    printf("Give me the third number : ");
    scanf(" %d", &num3);
    printf("Largest number = %d",largest(num1, num2, num3));

}

int largest (int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;   
    }
    else
    {
        return num3;
    }
}