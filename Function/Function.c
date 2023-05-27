#include <stdio.h>
 int addition(int x,int y){
  return x+y;
};
int multiplication(int,int);
// void fun(){
//     printf("hello");
// }
int main(){
int a,b,sum,mul,m,n;

a = 10;
b=20;
// fun();
mul = multiplication(m,n);
printf("%d\n",mul);
sum = addition(a,b);
printf("%d",sum);
return 0;
}
int multiplication(int m,int n){
    printf("Enter the both numbers:");
    scanf("%d %d",&m,&n);
    return m*n;
}