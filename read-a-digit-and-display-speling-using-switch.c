#include <stdio.h>

int number;
// banner
void banner() {
    printf("****************************************\n");
    printf("*          Number to Words Converter    *\n");
    printf("****************************************\n");
}

//spell

void spelling() {
    if (number < 0 || number > 99) {
        printf("[!] Please enter a number between 0 and 99!\n");
        return; 
    }

    if (number >= 0 && number <= 9) {
        switch (number) {
            case 0: printf("Zero"); break;
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    } else if (number >= 10 && number <= 19) {
        switch (number) {
            case 10: printf("Ten"); break;
            case 11: printf("Eleven"); break;
            case 12: printf("Twelve"); break;
            case 13: printf("Thirteen"); break;
            case 14: printf("Fourteen"); break;
            case 15: printf("Fifteen"); break;
            case 16: printf("Sixteen"); break;
            case 17: printf("Seventeen"); break;
            case 18: printf("Eighteen"); break;
            case 19: printf("Nineteen"); break;
        }
    } else {
        // Tens place
        switch (number / 10) {
            case 2: printf("Twenty"); break;
            case 3: printf("Thirty"); break;
            case 4: printf("Forty"); break;
            case 5: printf("Fifty"); break;
            case 6: printf("Sixty"); break;
            case 7: printf("Seventy"); break;
            case 8: printf("Eighty"); break;
            case 9: printf("Ninety"); break;
        }

        // Units place
        if (number % 10 != 0) {
            switch (number % 10) {
                case 1: printf(" One"); break;
                case 2: printf(" Two"); break;
                case 3: printf(" Three"); break;
                case 4: printf(" Four"); break;
                case 5: printf(" Five"); break;
                case 6: printf(" Six"); break;
                case 7: printf(" Seven"); break;
                case 8: printf(" Eight"); break;
                case 9: printf(" Nine"); break;
            }
        }
    }
}

//main
int main() {
    banner();
    printf("[+] Enter a number 0 to 99:");
    scanf("%d", &number);
    spelling();
    printf("\n");

    return 0;
}
