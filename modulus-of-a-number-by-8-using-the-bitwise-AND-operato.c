#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int modResult = num & 7; // 7 in binary is 0111

    printf("The result of %d mod 8 is: %d\n", num, modResult);

    return 0;
}
