//program to find value of mid element  
#include <stdio.h>
int main(){
int a[]={1,2,3,4,5};
int n = sizeof(a)/sizeof(a[0]);
printf("%d",*&a[n/2]);

    return 0;
}