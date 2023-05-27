//program to find repeating digit
#include <stdio.h>
#define N 5
int main(){
int i,j;
 int arr[N] = {7,8,9,7,8};
printf("repeating number\n");
 for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
        if(arr[i]==arr[j]){
            printf("%d\n",arr[j]);
        }
    }
 }

    return 0;
}