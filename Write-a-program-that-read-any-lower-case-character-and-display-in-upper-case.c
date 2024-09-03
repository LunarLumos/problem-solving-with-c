#include <stdio.h>

int main() {
    char lowerChar;

    // Prompt the user for input
    printf("Enter a lowercase character: ");
    
    // Read the input character
    scanf(" %c", &lowerChar);

    char upperChar = lowerChar - 32;     // formula
    printf("The uppercase character is '%c'.\n", upperChar);

    return 0;
}
