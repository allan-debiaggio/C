#include <stdio.h>

double square(double x)
{
    return x * x;
}

int main(void)
{
    // return = returns a value back to a calling function

    double x = square(3.14);
    printf("%lf", x);

    return 0;
}