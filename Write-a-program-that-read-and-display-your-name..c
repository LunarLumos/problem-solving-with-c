#include <stdio.h>

int main() {
    char name[100]; 

    printf("Enter your name: ");
    scanf(" %[^\n]", name);  // Read input including spaces until newline

    // Display 
    printf("Hello, %s\n", name);

    return 0;
}
