#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Multiply
    int multiplied = num << 1; // Shifting left by 1 (binary: num << 1 = num * 2)
    // Example: If num is 8 (binary: 0000 1000)
    // After left shift: 0001 0000 (which is 16 in decimal)

    // Divide
    int divided = num >> 1; // Shifting right by 1 (binary: num >> 1 = num / 2)
    // Example: If num is 16 (binary: 0001 0000)
    // After right shift: 0000 1000 (which is 8 in decimal)

    printf("Original number: %d\n", num);
    printf("After multiplying by 2: %d\n", multiplied);
    printf("After dividing by 2: %d\n", divided);

    return 0;
}
