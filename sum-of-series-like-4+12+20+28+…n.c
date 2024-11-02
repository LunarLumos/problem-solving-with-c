

// OR 
#include <stdio.h>

int main() {
    int n,a=4, sum = 0;

    printf("Enter the maximum value of (n): ");
    scanf("%d", &n);
    for (;;) {
        printf(" %d ",a);
        sum =sum +  a;
        a = a +  8;
        if (a > n){
            break;
    }
    }
    printf("\nSum of 4 to %d = %d\n",n, sum);
    return 0;
}
