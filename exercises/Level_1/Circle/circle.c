// Input the radius and compute the area of a circle

#include <stdio.h>

int main(void)
{
    float radius = 0;
    const float PI = 3.14;
    float area = 0;

    printf("Give the radius of the circle : ");
    scanf(" %f", &radius);
    area = PI * (radius * radius);
    printf("Area = %.2f", area);

    return 0;
}