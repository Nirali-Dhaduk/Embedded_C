#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    printf("Enter the numbers:" );
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(n));
    if (ptr ==NULL){
        printf("memory not available");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter an integer:");
        scanf("%d",ptr +i);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}