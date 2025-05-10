// Search for a number in an array

#include <stdio.h>

int search(int numbers[]);

int main(void)
{
    int numbers[5] = {1, 98, 63, 42, 12};
    search(numbers);

    return 0;
}

int search(int numbers[])
    // Function that searches for the number 42 in the array
{
    for(int i = 0; i <= 4; i++)
    {
        if(numbers[i] == 42)
        {
            printf("The number %d is in the array at index %d", numbers[i], i);
        }
    }
}