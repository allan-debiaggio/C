#include <stdio.h>

int main(void)
{
    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("Enter a number of rows : ");
    scanf("%d", &rows);

    printf("Enter a number of columns : ");
    scanf("%d", &columns);

    scanf("%c", &symbol);

    printf("Enter a symbol to use : ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}