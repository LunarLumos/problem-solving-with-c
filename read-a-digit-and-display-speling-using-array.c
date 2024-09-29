#include <stdio.h>

int number; 

// banner

void banner() {
    printf("****************************************\n");
    printf("*          Number to Words Converter    *\n");
    printf("****************************************\n");
}
// array for spelling

void spelling() {
    const char *unit[] = { "Zero", "One", "Two", "Three", "Four",
                            "Five", "Six", "Seven", "Eight", "Nine" };

    const char *teen[] = { "Ten", "Eleven", "Twelve", "Thirteen",
                            "Fourteen", "Fifteen", "Sixteen", 
                            "Seventeen", "Eighteen", "Nineteen" };

    const char *ten[] = { "", "", "Twenty", "Thirty", "Forty", 
                           "Fifty", "Sixty", "Seventy", "Eighty", 
                           "Ninety" };

    if (number < 0 || number > 99) {
        printf("[!] Please enter a number between 0 and 99.\n");
        return;
    }

    if (number < 10) {
        printf("[+] The number %d spelled as '%s'\n", number, unit[number]);
    } else if (number < 20) {
        printf("[+] The number %d spelled as '%s'\n", number, teen[number - 10]);
    } else {
        printf("[+] The number %d spelled as '%s", number, ten[number / 10]);
        if (number % 10 != 0) {
            printf(" %s'\n", unit[number % 10]);
        } else {
            printf("'\n");
        }
    }
}

int main() {
    banner();
    printf("[+] Enter a number between 0 and 99: ");
    scanf("%d", &number); 

    spelling();

    return 0;
}
