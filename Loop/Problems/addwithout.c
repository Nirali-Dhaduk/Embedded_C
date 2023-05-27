

#include <stdio.h>
int main(){
int a,b;
printf("Enter the first digit\n");
scanf("%d",&a);
printf("Enter the second digit\n");
scanf("%d",&b);
while(b !=0){
    a++;
    b--;
}

printf("sum of the digit is:%d",a);
    return 0;
}