#include <stdio.h>

int main()
{
    int l, s, r, num1, num2, lcm;

    printf("\n===============================\n");
    printf("       LCM calculator\n");
    printf("===============================\n");
    printf("Enter the value of L : ");
    scanf("%d", &l);
    printf("Enter the value of S : ");
    scanf("%d", &s);

    num1 = l;
    num2 = s;

    do {
        r = l % s;
        l = s;
        s = r;
    } 
    while (r != 0);

    lcm = (num1 * num2) / l;

    printf("The LCM (Lowest Common Multiple) is : %d\n", lcm);

    return 0;
}
