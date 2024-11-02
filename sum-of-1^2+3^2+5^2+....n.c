#include <stdio.h>

int main() {
    int n, a = 1, sum = 0;

    printf("Enter the last number of this series : ");
    scanf("%d", &n); 

    for (;;) {
        printf(" %d^2",a);
        sum =sum + (a*a);
        a=a+2; 
        if (a > n) {
            break; 
        }
    }

    printf("\nSum of 1 to %d = %d\n", n, sum);
    return 0;
}
//1^2+3^2+5^2+....n
