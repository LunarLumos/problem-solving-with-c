#include <stdio.h>

int main() {
    int n;
    printf("Enter the last number: ");
    scanf("%d", &n);
    float sum = 0;

    printf("Numbers: ");
    for (float i = 1.2; i <= n; i = i + 1.1) {
        sum =sum + i; 
        printf("%.1f", i);  // Print the number with one decimal

        // Print "+" if this is not the last number
        if (i + 1.1 <= n) {
            printf(" + ");
        }
    }
    printf("\n");

    printf("The sum of numbers from 1.2 to %d by gaping 1.1 is: %.2f\n", n, sum);
    return 0;
}

//1.2+2.3+3.4+....
