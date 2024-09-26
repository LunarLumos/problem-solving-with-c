#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    double result;
    printf("Enter your 1st number: ");
    scanf("%d", &num1);

    result = exp(num1);

    printf("Your power  value is: %lf\n", result);

    return 0;
}
