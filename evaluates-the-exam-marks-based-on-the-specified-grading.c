#include <stdio.h>

int main() {
    int x;
    printf("====================================\n");
    printf("       Exam Marks Evaluation\n");
    printf("====================================\n");
    printf("[-] Enter your Exam marks: ");
    scanf("%d", &x);

    if (x > 100) {
        printf("[!] Invalid marks entered. Please enter a valid mark between 0 and 100.\n");
    } else {
        if (x < 0) {
            printf("[!] Invalid marks entered. Please enter a valid mark between 0 and 100.\n");
        } else {
            if (x >= 80) {
                printf("\n[+] Outstanding! You scored %d marks, which means you got an A+!\n", x);
            } else if (x >= 75) {
                printf("\n[+] Great job! You scored %d marks, which means you got an A!\n", x);
            } else if (x >= 70) {
                printf("\n[+] Well done! You scored %d marks, which means you got an A-!\n", x);
            } else if (x >= 60) {
                printf("\n[!] Good effort! You scored %d marks, which means you got a B!\n", x);
            } else if (x >= 55) {
                printf("\n[!] Nice try! You scored %d marks, which means you got a B-!\n", x);
            } else if (x >= 50) {
                printf("\n[!] You scored %d marks, which means you got a C+.\n", x);
            } else if (x >= 45) {
                printf("\n[+] You passed with %d marks, which means you got a C.\n", x);
            } else {
                printf("\n[✖] Unfortunately, you scored %d marks. Better luck next time!\n", x);
            }
        }
    }

    printf("====================================\n");
    return 0;
}
