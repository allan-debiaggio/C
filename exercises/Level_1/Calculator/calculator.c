// Take two integers from the user and perform addition, subtraction,
// multiplication and division
#include <stdio.h>



int main(void)
{
    float num1;
    float num2;
    float result;
    char operator;

    printf("Give the first number : ");
    scanf(" %f", &num1);
    printf("Give the operator (+, -, *, /) : ");
    scanf(" %c", &operator);
    printf("Give the second number : ");
    scanf(" %f", &num2);

    switch (operator)
    {
        case '+' :
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-' :
            result = num1 - num2;
            printf("%.2f - %.2f= %.2f\n", num1, num2, result);
            break;
        case '*' :
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/' :
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            break;
        default :
            printf("Enter a valid operator please\n");
            break;
    }
}