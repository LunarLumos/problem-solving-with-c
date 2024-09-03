#include <stdio.h>

int main() {
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%o", &octalNumber); 

    printf("The decimal equivalent is %d.\n", octalNumber);

    return 0;
}
