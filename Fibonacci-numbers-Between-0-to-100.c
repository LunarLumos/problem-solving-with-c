#include <stdio.h>

int main() {
    int a = 0, b = 1, next , count=0;

    printf(" Fibonacci numbers Between 0 to 100 .\n");

    for (;;) {
       
        printf("%d ", a);
        
        next = a + b;
        a = b;
        b = next;
                if (a >= 100) {
            break; 
        }
    }
    
    
    printf("\n");
    return 0;
}
