#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 4; i <= n; i = i + 8) {
        sum = sum + i;
        printf("%d", i);
        if (i + 8 <= n) {
            printf(" + ");
        }
    }
    
    printf(" = %d\n", sum);
    return 0;
}


//4+12+20+...


// 0r 

#include <stdio.h>

int main() {
    int a = 4, n, sum = 0, count = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (;;) {
        printf ("%d ",a);
        if (a + 8 <= n) {
            printf(" + ");
        }
        sum = sum + a;
        a = a + 8;
        count++;
        if (count >= n) {
            break;
        }
    }

    printf("\nSum = %d\n", sum);
    return 0;
}
