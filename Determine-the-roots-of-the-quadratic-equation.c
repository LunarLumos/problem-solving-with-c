#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double result;

    printf("====================================\n");
    printf("  Determine the roots of the quadratic equation ax^2 + bx + c = 0\n");
    printf("====================================\n");
    
    printf("[+] Enter your coefficient 'a': ");
    scanf("%d", &a);
    if (a == 0) {
        printf("[!] Coefficient 'a' should not be 0!\n");
        return 1;
    }

    printf("[+] Enter your coefficient 'b': ");
    scanf("%d", &b);
    if (b == 0) {
        printf("[!] Coefficient 'b' should not be 0!\n");
        return 1;
    }

    printf("[+] Enter your coefficient 'c': ");
    scanf("%d", &c);
    if (c == 0) {
        printf("[!] Coefficient 'c' should not be 0!\n");
        return 1;
    }

    result = (b * b) - (4 * a * c);

    printf("[+] discriminant of your quadratic equation is %lf !\n",result);
    if (result > 0) {
        printf("[+] Two real roots!\n");
    } else if (result == 0) {
        printf("[+] One real root!\n");
    } else {
        printf("[!] No real roots.\n");
    }

    return 0;
}
