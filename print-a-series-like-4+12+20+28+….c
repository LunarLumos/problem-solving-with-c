#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        int term = 8 * i - 4;
        printf("%d", term);
        if (i < n) {
            printf(" + ");
        }
    }
    
    printf("\n");

    return 0;
}
