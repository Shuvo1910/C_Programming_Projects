#include <stdio.h>

int main() {
    int choice, num;
    char exit_choice;

    do {
        printf("\n========================================\n");
        printf("            Number Classifier\n");
        printf("==========================================\n");
        printf("1. Check the number Even or Odd\n");
        printf("2. Check the number Positive or Negative\n");
        printf("==========================================\n");

        printf("Enter your choice (1-2): ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("\nEnter the Number : ");
            scanf("%d", &num);

            if (num % 2 == 0) {
                printf("%d Is Even.\n", num);
            } else {
                printf("%d Is Odd.\n", num);
            } 
        }

        else if (choice == 2) 
        {
            printf("\nEnter the Number : ");
            scanf("%d", &num);

            if (num > 0) {
                printf("%d Is Positive.\n", num);
            } else if (num < 0) {
                printf("%d Is Negative.\n", num);
            } else {
                printf("%d Is Zero.\n", num);
            }
        }

        else 
        {
            printf("\nInvalid Choice!\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &exit_choice); 
        
    } while (exit_choice == 'y' || exit_choice == 'Y');

    printf("\n=====================================\n");
    printf("     Thank You, Have a Nice Day!     \n");
    printf("=====================================\n");

    return 0;
}
