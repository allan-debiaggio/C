#include <stdio.h>
#include <string.h>

int main(void)
{
    // char x = 'X';
    // char y = 'Y';
    // char temp;

    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    // temp = x;
    // x = y;
    // y = temp;

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);


    // printf("x = %c\n", x);
    // printf("y = %c\n", y);

    return 0;
}