#include <stdio.h>
int main(){
    int *p, arr[]={12,13,14,15};
    for(p=arr;p<=arr+3;p++){
        printf("%d ",*p);
    }

    return 0;
}