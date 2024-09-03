#include <stdio.h>

int main() {
    char inputChar;

    printf("Enter a character: ");
    
    // Read the input character
    scanf(" %c", &inputChar); //  to skip any whitespace
    printf("The ASCII value of '%c' is %d.\n", inputChar, (int)inputChar);

    return 0;
}
