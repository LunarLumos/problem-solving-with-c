#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Enter a positive value for x: ");
    scanf("%lf", &x);

    if (x <= 0) {
        printf("Error: x must be positive.\n");
        return 1; // Exit if x is not positive
    }

    double natural_log = log(x);      // Natural logarithm (base e)
    double log_base_10 = log10(x);    // Logarithm base 10

    printf("Natural log (ln) of %.2lf is %.4lf\n", x, natural_log);
    printf("Log base 10 of %.2lf is %.4lf\n", x, log_base_10);

    return 0;
}
