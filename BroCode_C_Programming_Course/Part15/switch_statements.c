#include <stdio.h>

int main(void)
{

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    // For example, instead of using this :

    // if(grade == 'A')
    // {
    //     printf("Perfect !\n");
    // }
    // else if (grade == 'B')
    // {
    //     printf("You did good !\n");
    // }
    // else if (grade == 'C')
    // {
    //     printf("You did okay\n");
    // }
    // else if (grade == 'D')
    // {
    //     printf("At least it's not an F\n");
    // }
    // else if (grade == 'F')
    // {
    //     printf("YOU FAILED\n");
    // }
    // else
    // {
    //     printf("That's not a valid grade\n");
    // }

    switch(grade)
    {
        case 'A':
            printf("Perfect !\n");
            break; // If there's no break, all the cases will be true. It's to break out of the switch
        case 'B':
            printf("You did good !\n");
            break;
        case 'C':
            printf("You did okay\n");
            break;
        case 'D':
            printf("At least it's not an F\n");
            break;
        case 'F':
            printf("YOU FAILED\n");
            break;
        default : // same thing as the else statement, if none of the cases is met it will resort to defaut
            printf("Please enter only valid grades");
    }

    return 0;
}