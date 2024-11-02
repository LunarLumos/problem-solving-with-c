#include <stdio.h>

int main() {
    int n;
    float a = 1.2, sum = 0;

    printf("Enter the last number of this seris : ");
    scanf("%d", &n); 

    for (;;) {
        printf(" %.1f",a);
        sum =sum + a;
        a=a+1.1; 
        if (a > n) {
            break; 
        }
    }

    printf("\nSum of 1 to %d = %.1f\n", n, sum);
    return 0;
}
//1.2+2.3+3.4+...
