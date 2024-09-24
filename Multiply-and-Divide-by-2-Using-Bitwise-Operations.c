#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);


    int multiplied = num << 1; // num * 2
    int divided = num >> 1; // num / 2

    printf("Original number: %d\n", num);
    printf("After multiplying by 2: %d\n", multiplied);
    printf("After dividing by 2: %d\n", divided);

    return 0;
}
