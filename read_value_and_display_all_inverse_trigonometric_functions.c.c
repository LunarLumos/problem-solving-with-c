#include <stdio.h>
#include <math.h> 

int main() {
    double n;

    printf("Enter a value (n): ");
    scanf("%lf", &n);

    double arcsinValue = asin(n);   // sin inverse
    double arccosValue = acos(n);   // cos inverse
    double arctanValue = atan(n);   // tan inverse

    double secInverse = 1 / cos(arccosValue); 
    double cosecInverse = 1 / sin(arcsinValue);
    double cotInverse = 1 / tan(arctanValue); 

    printf("sin^-1(%.2f) = %.5f radians\n", n, arcsinValue);
    printf("cos^-1(%.2f) = %.5f radians\n", n, arccosValue);
    printf("tan^-1(%.2f) = %.5f radians\n", n, arctanValue);
    printf("sec^-1(%.2f) = %.5f radians\n", secInverse);   // May be problematic if n leads to undefined values
    printf("cosec^-1(%.2f) = %.5f radians\n", cosecInverse); // May be problematic if n leads to undefined values
    printf("cot^-1(%.2f) = %.5f radians\n", cotInverse);   // May be problematic if n leads to undefined values

    return 0;
}
