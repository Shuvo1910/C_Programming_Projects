#include<stdio.h>

// area of square

int main() {
    int side;
    printf("Enter side of Square : ");
    scanf("%d", &side);

    int area = side * side;
    printf("Area of Square : %d", area);

    return 0;

}