#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    double result;
    printf("Enter your 1st number: ");
    scanf("%d", &num1);

    printf("Enter your 2nd  number: ");
    scanf("%d", &num2);
    result = pow(num1 ,num2 );


    printf("Your power  value is: %lf\n", result);

    return 0;
}
