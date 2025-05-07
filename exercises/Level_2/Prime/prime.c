// Input a number and determine if it is prime (Or composite)

#include <stdio.h>
#include <stdbool.h>

bool prime(int num);

int main (void)
{
    int num = 0;

    printf("Give me a positive integer : ");
    scanf(" %d", &num);
    if(prime(num))
    {
        printf("%d is a prime number", num);
    }
    else if(num == 1)
    {
        printf("%d is a unique number", num);
    }
    else
    {
        printf("%d is a composite number", num);
    }

    return 0;
}

bool prime(int num)
    {
        int divisible = 0;
        for (int i = 1; i <= num; i ++)
        {
            if (num % i == 0)
            {
                divisible ++;
            }
        }
        if(divisible == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }