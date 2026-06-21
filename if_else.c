#include<stdio.h>

int main() {
     int a;
     printf("Inter the Number : ", a);
     scanf("%d", &a);

     if (a>0) {
          printf("The number is Positive.\n");
     }

     else if (a<0) {
          printf("The number is Negative.\n");
     }

     else if (a==0) {
          printf("The number is Zero.\n");
     }

     else {
          printf("This is a invalid input!\n");
     }

return 0;
}
