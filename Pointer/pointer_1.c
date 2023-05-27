#include <stdio.h>
int main(){
    int i =1,*q;
    int *p = &i;
    int a[] =  {3,4,5,6};
    printf("%d",*a);
    q = p;
    *q = 5;
    printf("%d",*p);

    return 0;
}