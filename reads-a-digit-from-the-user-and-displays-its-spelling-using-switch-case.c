#include <stdio.h>

int main() {
    int digit;

    printf("Enter a number between 0 and 99: ");
    scanf("%d", &digit);

    if (digit < 0 || digit > 99) {
        printf("Invalid input! Please enter a number between 0 and 99.\n");
        return 1;
    }

    if (digit < 10) {
        switch (digit) {
            case 0: printf("Zero\n"); break;
            case 1: printf("One\n"); break;
            case 2: printf("Two\n"); break;
            case 3: printf("Three\n"); break;
            case 4: printf("Four\n"); break;
            case 5: printf("Five\n"); break;
            case 6: printf("Six\n"); break;
            case 7: printf("Seven\n"); break;
            case 8: printf("Eight\n"); break;
            case 9: printf("Nine\n"); break;
        }
    } else if (digit < 20) {
        switch (digit) {
            case 10: printf("Ten\n"); break;
            case 11: printf("Eleven\n"); break;
            case 12: printf("Twelve\n"); break;
            case 13: printf("Thirteen\n"); break;
            case 14: printf("Fourteen\n"); break;
            case 15: printf("Fifteen\n"); break;
            case 16: printf("Sixteen\n"); break;
            case 17: printf("Seventeen\n"); break;
            case 18: printf("Eighteen\n"); break;
            case 19: printf("Nineteen\n"); break;
        }
    } else {
        switch (digit / 10) {
            case 2: printf("Twenty"); break;
            case 3: printf("Thirty"); break;
            case 4: printf("Forty"); break;
            case 5: printf("Fifty"); break;
            case 6: printf("Sixty"); break;
            case 7: printf("Seventy"); break;
            case 8: printf("Eighty"); break;
            case 9: printf("Ninety"); break;
        }
        if (digit % 10 != 0) {
            printf(" ");
            switch (digit % 10) {
                case 1: printf("One\n"); break;
                case 2: printf("Two\n"); break;
                case 3: printf("Three\n"); break;
                case 4: printf("Four\n"); break;
                case 5: printf("Five\n"); break;
                case 6: printf("Six\n"); break;
                case 7: printf("Seven\n"); break;
                case 8: printf("Eight\n"); break;
                case 9: printf("Nine\n"); break;
            }
        } else {
            printf("\n");
        }
    }

    return 0;
}
