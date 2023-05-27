#include <stdio.h>
#define option 4
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}int mul(int a,int b){
    return a*b;
}int div(int a,int b){
    return a/b;
}
int main(){
    int choice;
    int a,b;
 int (*fun_ptr[option])( int,int) = {add,sub,mul,div};
printf("Enter 0 for addition,1 for subtraction,2 for multipication,3 for division:");
scanf("%d",&choice);
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
printf("result is %d",fun_ptr[choice](a,b));

    return 0;
}