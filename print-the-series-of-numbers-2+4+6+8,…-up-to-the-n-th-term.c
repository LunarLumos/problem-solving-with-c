#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("The number series up to %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        int even_number = 2 * i;
        printf("%d ", even_number);
    }
    
    printf("\n");

    return 0;
}
