#include <stdio.h>

int main(void)
{

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Congratulations, you're an adult !");
    }
    else if (age == 0)
    {
        printf("Congratulations, you were just born !");
    }
    else if (age < 0)
    {
        printf("Yeah sure, you little troll !");
    }
    else 
    {
        printf("You're still a minor !");
    }

    return 0;
}