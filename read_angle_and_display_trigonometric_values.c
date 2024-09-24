#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846 // Define pi

int main() {
    double angleInDegrees;

    printf("Enter angle (in degrees): ");
    scanf("%lf", &angleInDegrees);

    double angleInRadians = angleInDegrees * (PI / 180.0);

    double sinValue = sin(angleInRadians);
    double cosValue = cos(angleInRadians);
    double secValue = 1 / cosValue;
    double cosecValue = 1 / sinValue;
    double tanValue = tan(angleInRadians);
    double cotValue = 1 / tanValue;

    printf("sin(%.2f) = %.5f\n", angleInDegrees, sinValue);
    printf("cos(%.2f) = %.5f\n", angleInDegrees, cosValue);
    printf("sec(%.2f) = %.5f\n", angleInDegrees, secValue);
    printf("cosec(%.2f) = %.5f\n", angleInDegrees, cosecValue);
    printf("tan(%.2f) = %.5f\n", angleInDegrees, tanValue);
    printf("cot(%.2f) = %.5f\n", angleInDegrees, cotValue);

    return 0;
}
