#include <stdio.h>

int main() {
    int decimalNumber;

    // Enter a decimal number (e.g., 255)
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Display the hexadecimal equivalent
    printf("The hexadecimal equivalent is %X.\n", decimalNumber);

    return 0;
}
