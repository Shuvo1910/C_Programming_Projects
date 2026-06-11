# include <stdio.h>

int main() {

    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Your Age Is %d\n", age);

    int A,B;
    printf("Enter A value : ");
    scanf("%d", &A);

    printf("Enter B value : ");
    scanf("%d", &B);

    int sum = A+B;
    printf("Sum of A & B : %d", sum);

    return 0;

}

/*

& - for data location
&age - location name, where data will store

*/