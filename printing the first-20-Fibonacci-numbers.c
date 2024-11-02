#include <stdio.h>

int main() {
    int a = 0, b = 1, next , count=0;

    printf(" total 20 Fibonacci numbers \n");

    for (;;) {
       
        printf("%d ", a);
        
        next = a + b;
        a = b;
        b = next;
        count++;
                if (count >= 20) {
            break; 
        }
    }
    
    printf("\n");
    return 0;
}
