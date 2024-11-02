#include <stdio.h>
// read a number and print it factorial
int main(){
    int n , a=1, fac = 1;
    printf("Enter one numbers: (ex: 10): ");
    scanf("%d",&n);
    if (n >=0){
        for (;;){
            fac= fac * a;
            a = a + 1; 
            if(a > n){
                break;
            }
        }
    }
    printf("[+] Factorial of %d is = %d\n",n, fac);
}

// 6! = 1*2*3*4*5*6
