#include <stdio.h>

int main() {
    int n;
    printf("Enter the last number: ");
    scanf("%d", &n);
    int sum = 0;

    printf("Numbers: ");
    for (int i = 4; i <= n; i += 8) {
        sum += i; 
        printf("%d", i);

        if (i + 8 <= n) {
            printf(" + ");
        }
    }
    printf("\n");

    printf("The sum of numbers from 4 to %d by gaping 8 is: %d\n", n, sum);
    return 0;
}
