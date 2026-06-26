#include <stdio.h>

int main()
{
    int l, s, r;
    printf("\n===============================\n");
    printf("       GCD calculator\n");
    printf("===============================\n");
    printf("Enter the value of L : ");
    scanf("%d", &l);
    printf("Enter the value of S : ");
    scanf("%d", &s);

    do
    {
        r = l % s;
        l = s;
        s = r;
    } while (r != 0);

    printf("The GCD (Greatest Common Divisor) is : %d\n", l);

    return 0;
}
