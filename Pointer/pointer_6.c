//program to add two numbers using pointer
#include <stdio.h>
int addition(int *x,int *y){
return *x + *y;
}
int main(){

    int a,b,*x,*y,sum;
    x = &a, y = &b;
    printf("Enter two numbers for addition:");

    scanf("%d %d",x,y);
     sum = addition(x,y);
    printf ("Sum is %d",sum);


    return 0;
}