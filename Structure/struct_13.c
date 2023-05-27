#include <stdio.h>
typedef struct math{
    int result;
  int (*ptr)(int,int) ;
}str;
int add(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int main(){
    // typedef int (*ptr)(int,int) p;
    str obj;
 
   obj.ptr = add;
   obj.result = obj.ptr(3,5);
   printf("the sum is :%d\n",obj.result);
obj.ptr=mul;
obj.result = obj.ptr(3,5);
printf("the multiplication of those two numbers is:%d",obj.result);
    return 0;
}