#include <stdio.h>

int main() {
    int hexNumber;

    printf("Enter a hexadecimal number (e.g., 1A3F): ");
    scanf("%x", &hexNumber);

    printf("The decimal equivalent is %d.\n", hexNumber);  // Print the decimal equivalent

    return 0;
}
