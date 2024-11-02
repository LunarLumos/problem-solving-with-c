#include <stdio.h>

int main() {
    int n , a = 0, b = 1, next , count=0;

    printf(" Enter your number the terms Fibonacci number (ex: 10) :");
    scanf(" %d",&n);

    for (;;) {
       
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        count++;
                if (count >=n) {
            break; 
        }
    }
    
    printf("\n");
    return 0;
}
