//function pointer
#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int result;
    int (*ptr)(int,int ) = &add;
    result = ptr(3,4);
    printf("%d",result);
    return 0;
}