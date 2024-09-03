#include <stdio.h>

int main() {
    int asciiValue;
    
    printf("Enter an ASCII value: ");
    scanf("%d", &asciiValue);
    
    printf("The character for ASCII value %d is '%c'.\n", asciiValue, (char)asciiValue);

    return 0;
}
