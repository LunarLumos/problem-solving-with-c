#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int andResult = num1 & num2;
    int orResult = num1 | num2;
    int xorResult = num1 ^ num2;
    
    printf("Bitwise AND of %d and %d is: %d\n", num1, num2, andResult);
    printf("Bitwise OR of %d and %d is: %d\n", num1, num2, orResult);
    printf("Bitwise XOR of %d and %d is: %d\n", num1, num2, xorResult);
    
    return 0;
}
