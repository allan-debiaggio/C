// Swap two integers using a third variable. Bonus : Do it with a third variable

#include <stdio.h>

int main (void)
{
    int num1 = 0;
    int num2 = 0;
    int swapper = 0;

    printf("Give me the first integer : ");
    scanf(" %d", &num1);
    printf("Give me the second integer : ");
    scanf(" %d", &num2);
    printf("Number 1 = %d, Number 2 = %d\n", num1, num2);
    swapper = num2, num2 = num1, num1 = swapper;
    printf("Swapped numbers : Number 1 = %d, Number 2 = %d\n", num1, num2);

    // Second part, not using third variable
    printf("Give me the first integer : ");
    scanf(" %d", &num2);
    printf("Give me the second integer : ");
    scanf(" %d", &num1);
    printf("Swapped numbers : Number 1 = %d, Number 2 = %d", num1, num2);


    return 0;
}