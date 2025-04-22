#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = true;

    if(!sunny) // so here if NOT sunny
    {
        printf("It's cloudy outside !");
    }
    else
    {
       printf("It's sunny outside !"); 
    }

    return 0;
}