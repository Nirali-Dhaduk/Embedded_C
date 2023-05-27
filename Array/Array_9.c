// variable length array demo
#include <stdio.h>
int main(){
    int n,i,sum = 0;
    int arr[n];
    printf("number of array elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   sum = sum + arr[i];
    }
    for(i=n-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    printf("%d",sum);
    return 0;
}
