#include <stdio.h>

int main()
{
    int i = 0;

    for (i = 0; i <= 10; i++)
    {
        printf("Hello World!\n");
    }

 
    int n = 20; 
    
  
    for (i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            printf("\nPass\n ");
            continue; 
        }
        printf("%d ", i);
    }

    return 0;
}