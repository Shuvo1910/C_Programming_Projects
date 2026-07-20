
#include <stdio.h>

int main() {

    // For Loop: 

    printf("++++++++Even & Odd Check++++++++++\n");

    printf("\n(Even Numbers):\n");

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d Even\n", i);
        }
    }

    printf("\n\n(Odd Numbers):\n");

    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d Odd\n", i);
        }
    }


    // While Loop:

    int i;

    printf("++++++++Even & Odd Check++++++++++\n");

    printf("\n(Even Numbers):\n");
    i=1;
    while (i<=50) {
        if (i % 2 == 0) {
            printf("%d Even \n", i);
        }
        i++;

    }
    

    printf("\n\n(Odd Numbers):\n");
    i=1;
    while (i<=50) {
        if (i % 2 != 0) {
            printf("%d Odd \n", i);
        }
        i++;

    }

    
    //Do - While: 

    int i;

    printf("++++++++Even & Odd Check++++++++++");
    printf("\n(Even Numbers):\n");

    
    i = 1;
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;

    } while (i <= 50);

    printf("\n\n(Odd Numbers):\n");
    i = 1;
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;

    } while (i <= 50);

    return 0;
}
