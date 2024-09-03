#include <stdio.h>

int main() {
    int decimalNumber;

    //  (e.g., 123)
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Display the octal equivalent
    printf("The octal equivalent is %o.\n", decimalNumber);

    return 0;
}
