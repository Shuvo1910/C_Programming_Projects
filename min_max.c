#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a >= b) {

        if (a >= c) {
            printf("Maximum number is: %d\n", a);
        }
        else {
            printf("Maximum number is: %d\n", c);
        }
    }

    else {

        if (b >= c) {
            printf("Maximum number is: %d\n", b);
        }

        else {
            printf("Maximum number is: %d\n", c);
        }
    }

    if (a <= b) {

        if (a <= c) {
            printf("Minimum number is: %d\n", a);
        }

        else {
            printf("Minimum number is: %d\n", c);
        }
    }

    else {

        if (b <= c) {
            printf("Minimum number is: %d\n", b);
        }

        else {
            printf("Minimum number is: %d\n", c);
        }
    }

    return 0;
}
