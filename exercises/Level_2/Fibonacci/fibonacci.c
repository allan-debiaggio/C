// Print the first numbers of the Fibonacci sequence

#include <stdio.h>

void fibonacci(void);

int main(void)
{
    fibonacci();

    return 0;
}

void fibonacci(void)
{
    int num1 = 0;
    int num2 = 1;
    
    printf("%d\n%d\n", num1, num2);
    for(int i = 0; i < 10; i++)
    {
        num1 = num1 + num2;
        num2 = num1 + num2;
        printf("%d\n%d\n", num1, num2);
    }

}