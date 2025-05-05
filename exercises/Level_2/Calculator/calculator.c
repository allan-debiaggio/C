// Use a switch to select operator between two numbers

#include <stdio.h>

float calculator(float num1, float num2, char operator);

int main (void)
{
    float num1 = 0;
    float num2 = 0;
    char operator = '0';
    float result = 0;

    printf("Give me the first number : ");
    scanf(" %f", &num1);
    printf("Give me the operator (+, -, *, /) : ");
    scanf(" %c", &operator);
    printf("Give me the second number : ");
    scanf(" %f", &num2);
    result = calculator(num1, num2, operator);
    printf("Result = %.2f", result);

    return 0;
}

float calculator(float num1, float num2, char operator)
{
    switch(operator)
    {
        case '+' :
            return num1 + num2;
            break;
        case '-' :
            return num1 - num2;
            break;
        case '*' :
            return num1 * num2;
            break;
        case '/' :
            return num1 / num2;
            break;
    }
}