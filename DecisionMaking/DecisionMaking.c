#include <stdio.h>
int main(){
//check whether number is positive or not
int num;
printf("Enter the number:");
scanf("%d",&num);
if (num>0){
    printf("the num:%d is positive\n",num);
}
else if (num ==0){
    printf("the number is zero\n");
}
else{
    printf("the given num is negative\n");
}
//application of switch statement

int i = 1;
while(i<=20)
{
    if (i%2 == 0){
        printf("%d\n",i);
    }
    i++;
}
    return 0;
}