#include<stdio.h>
int firstVar;
int main(){
    
    int var1 = 1;
    int var2;
    var1 = 10;
    var2 = var1;
    
    printf("%d\n",var2);
    unsigned int first = 5767 ;
    printf("%u\n",first);
    printf("%d %d",var1 , var2);
    printf("%u\n",sizeof(first));

    printf("%d",firstVar);
    return 0;
}