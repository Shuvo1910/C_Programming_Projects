#include<stdio.h>

// area of circle

int main() {
    float radius;
    printf("Enter radius of Circle : ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    printf("Area of Circle : %f", area);

    return 0;
}