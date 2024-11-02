#include <stdio.h>
// fibonacci between 65 to 100
int main(){
    int a  = 0 , b = 1 , next ;
    printf("Fibonacci numbers between 65 and 100 are:\n");
    for (;;){
        
        next = a + b;
        a = b;
        b = next ;
        if(a > 100){
          break;
        }
        if (a >=65 ){
          printf(" %d ", a);
        }

    }
}
