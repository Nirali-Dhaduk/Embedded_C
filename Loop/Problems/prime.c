
#include <stdio.h>

int main()
{
    int a, b, count = 0;
    
    printf("Enter value: ");
    scanf("%d", &a);
    
    for (b = 1; b <= a;  b ++)
    {
        if ( a % b == 0)
        {
            count++;
        }
     }
     if (count == 2)
     {
         printf("prime number");
     }
     else
     {
         printf("not prime number");
     }
 }