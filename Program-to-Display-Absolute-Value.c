#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int absValue;

    if (num < 0) {
        absValue = -num; /
    } else {
        absValue = num;
    }

// or we can do "       int absValue = (num < 0) ? -num : num;  "

    printf("The absolute value of %d is: %d\n", num, absValue);

    return 0;
}
