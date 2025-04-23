#include <stdio.h>

int main(void)
{
    // array = a data structure that can store many values of the same data type.
    // You can initialize differently, such as setting the number of elements first, after,
    // or at the same time you're giving elements. Here the number is not set.

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("%.2lf", prices[4]);

    return 0;
}