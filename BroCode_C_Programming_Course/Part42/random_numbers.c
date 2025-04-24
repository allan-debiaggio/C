#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // pseudo random numbers = A set of values or elements that are statistically random
    // (Don't use these for any sort or cryptographic security)

    srand(time(0)); // required seed to make the numbers change between each iteration

    int number1 = (rand() % 6) + 1; // Random number generated between 1 and 6
    int number2 = (rand() % 6) + 1; // The modulus is here for putting a ceiling to the rand function
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}