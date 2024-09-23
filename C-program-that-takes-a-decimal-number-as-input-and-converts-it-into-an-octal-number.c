#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Octal: %o\n", decimal);  // %o is used to print octal value

    return 0;
}

