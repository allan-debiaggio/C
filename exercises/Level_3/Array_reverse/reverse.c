// Reverse a 1D array

#include <stdio.h>

int main(void)
{
    int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("The array to be reversed is : ");
    for(int i = 0; i < 10; i ++)
    {
        printf("%d",numbers[i]);
    }
    printf("\nThe reversed array is : ");
    for(int i = 9; i >= 0; i--)
    {
        printf("%d", numbers[i]);
    }

    return 0;
}