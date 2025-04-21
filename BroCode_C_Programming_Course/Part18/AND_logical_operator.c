#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // logical operators == && (AND) checks if two conditions are true

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny) // sunny doesn't need to be == 1 or == true, it is implicit that it's true
    {
        printf("The weather is good !");
    }
    else 
    {
        printf("The weather is bad !");
    }

    return 0;
}