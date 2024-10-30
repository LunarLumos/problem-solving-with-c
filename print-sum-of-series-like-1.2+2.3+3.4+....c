#include <stdio.h>

int main() {
    int n;
     float sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");
    for (float i = 1.2; i <= n; i = i + 1.1) {
        sum = sum + i;
        printf("%.1f", i);
        if (i <= n) {
            printf(" + ");
        }
    }
    
    printf(" = %.1f\n", sum);
    return 0;
}


//1.2+2.3+3.4+...
