#include <stdio.h>

int main() {
    int mark;
    char exit_choice; 

    do {
        printf("Enter your marks: ");
        scanf("%d", &mark);

        if (mark >= 95) {
            printf("Student achieved 4.00 out of 4.00 (A+)\n");
            printf("This is an outstanding result.\n");
        } else if (mark >= 90) {
            printf("Student achieved 4.00 out of 4.00 (A)\n");
            printf("This is a superlative result.\n");
        } else if (mark >= 85) {
            printf("Student achieved 3.80 out of 4.00 (A-)\n");
            printf("This is an excellent result.\n");
        } else if (mark >= 80) {
            printf("Student achieved 3.33 out of 4.00 (B+)\n");
            printf("This is a very good result.\n");
        } else if (mark >= 75) {
            printf("Student achieved 3.00 out of 4.00 (B)\n");
            printf("This is a good result.\n");
        } else if (mark >= 70) {
            printf("Student achieved 2.80 out of 4.00 (B-)\n");
            printf("This is a satisfactory result.\n");
        } else if (mark >= 65) {
            printf("Student achieved 2.50 out of 4.00 (C+)\n");
            printf("This is an above average result.\n");
        } else if (mark >= 60) {
            printf("Student achieved 2.20 out of 4.00 (C)\n");
            printf("This is an average result.\n");
        } else if (mark >= 50) {
            printf("Student achieved 1.50 out of 4.00 (D)\n");
            printf("This is a passing result.\n");
        } else {
            printf("Student achieved 0.00 out of 4.00 (F).\n");
            printf("Student failed in the exam.\n");
        }


        printf("\nDo you want to check another mark? (y/n): ");
        scanf(" %c", &exit_choice);

    } while (exit_choice == 'y' || exit_choice == 'Y'); 

    printf("Program exited. Thank you!\n");
    return 0;
}

