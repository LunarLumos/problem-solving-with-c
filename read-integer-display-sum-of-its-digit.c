#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (;;) {
        sum = sum + (n % 10); 
        n /= 10;  
        if (n ==0) break;
    }

    printf("The sum of the digits is: %d\n", sum);
    
    return 0; 
}
