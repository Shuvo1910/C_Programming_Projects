#include <stdio.h>

int main() {
    int year;
    char choice;

    do {
        printf("\n==================================\n");
        printf("=======Leap Year Calculator=======\n");
        printf("==================================\n");

        printf("\nEnter The Year : ");
        scanf("%d", &year);

        // Leap Year Check:
        
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("This is a Leap Year!\n");
        } else {
            printf("This isn't a Leap Year!\n");
        }

        // 21st Century check (2001 to 2100):

        if (year >= 2001 && year <= 2100) {
            printf("This is in the 21st Century!\n");
        } else {
            printf("This isn't in the 21st Century!\n");
        }

        printf("\nDo you want to check another year? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the program!\n");

    return 0;
}