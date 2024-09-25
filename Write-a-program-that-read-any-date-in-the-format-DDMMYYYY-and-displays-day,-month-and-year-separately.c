#include <stdio.h>

int main() {
    int d, m, y;
    printf("Enter date (DD,MM,YYYY): ");
    scanf("%d%*c%d%*c%d", &d, &m, &y); // This format allows for any character as separator
    printf("Day = %d\nMonth = %d\nYear = %d\n", d, m, y);

    return 0;
}
