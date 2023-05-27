#include <stdio.h>
int main(){
    printf("Enter the number:");
    int num,i=1,rem,sum=0;

    scanf("%d",&num);
    while(i<num){
        rem = num%i;
        if (rem == 0){
          
            sum = sum + i ;
           
        }
        i++;
    }
    if (sum == num){
        printf("perfect number");
    }
    else{
        printf("Not a perfect number");
    }

    return 0;
}