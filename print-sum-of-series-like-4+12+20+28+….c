#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 4; i <= n; i = i + 8) {
        sum = sum + i;
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
    }
    
    printf(" = %d\n", sum);
    return 0;
}


//4+12+20+...
