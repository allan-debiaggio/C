/*
Exercise : Implement a program that generates the circumference of a circle when a radius is given
*/

#include <stdio.h>

int main(void){
    
    float result;
    float circumference(void); // Declaring the function so it exists already
    
    result = circumference();

    printf("\nThe circle's circumference is %f\n", result);

    return 0;
    
}

float circumference (void) {
    float radius;
    const float PI = 3.14;
    float circumference;

    printf("What is the circle's radius ?\n");
    scanf("%f", &radius);
    circumference = 2 * (radius * PI);
    
    return circumference;
}