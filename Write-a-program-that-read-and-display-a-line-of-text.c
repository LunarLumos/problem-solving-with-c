#include <stdio.h>

int main() {
    char line[256];  // to store the line of text

    printf("Enter a line of text: ");
    scanf(" %[^\n]", line);  // Read until newline character

    // Display
    printf("You entered: %s\n", line);

    return 0;
}
