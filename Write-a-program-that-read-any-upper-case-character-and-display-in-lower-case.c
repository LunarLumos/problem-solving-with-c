#include <stdio.h>

int main() {
    char upperChar;

    printf("Enter an uppercase character: ");
    
    scanf(" %c", &upperChar); 
    char lowerChar = upperChar + 32;     // Convert 
    printf("The lowercase character is '%c'.\n", lowerChar);

    return 0;
}
