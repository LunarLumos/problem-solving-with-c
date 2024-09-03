#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter a date in DDMMYYYY format: ");
    scanf("%2d%2d%4d", &day, &month, &year); 

    // Display
    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d\n", year);

    return 0;
}
