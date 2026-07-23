#include <stdio.h>

int main()
{
    float total, final_bill;
    char choice;

    do
    {
        printf("\n==================================\n");
        printf("======= Discount & Delivery =======\n");
        printf("===================================\n");

        printf("Enter total Bill : ");
        scanf("%f", &total); 

        final_bill = total;

        if (total > 5000)
        {
            final_bill = total - (total * 0.10); 
        }

        if (total < 2000)
        {
            final_bill = final_bill + 100; 
        }

        printf("Final Bill : %.2f TK\n\n", final_bill); 

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\nThank you for shopping with us!\n");

    return 0;
}