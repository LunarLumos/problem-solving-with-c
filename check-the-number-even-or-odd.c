#include <stdio.h>

int main() {
    int x;
    printf(" [-] Enter your number:");
    scanf("%d",&x);
    if (x % 2 == 0){
        printf(" [+] %d is an Even number !\n",x);
    }else{
        printf("[!] %d is an ODD number !\n",x);
    }

    return 0;
}
