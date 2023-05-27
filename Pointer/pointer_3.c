// sum of array elements using pointer
#include <stdio.h>
int main(){
    int sum =0,*p;
    int arr[] = {3,67,90,78};

    for(p= arr ;p <= arr+3;p++){
        sum = sum + *p;
        
    }
    printf("Sum is %d",sum);
    return 0;
}