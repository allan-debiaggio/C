#include <stdio.h>
#include <math.h> // Math header used for math functions

int main(void) {

    double A = sqrt(9); // SQare RooT function
    double B = pow(2, 4); // 2 to the power of 4
    int C = round(3.14); // round to the nearest int
    int D = ceil(3.14); // Ceiling = rounding up, here it will give 4
    int E = floor(3.99); // Flooring is rounding down, here it will give 3
    double F = fabs(-100); // FindABSolute = find how far a number is away from 0. So will transform a negative into positive
    double G = log(3); // Logarithm
    double H = sin(45); // Sign / Sinus
    double I = cos(45); // Cosign / Cosinus
    double J = tan(45); // Tangent

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);

    return 0;
}