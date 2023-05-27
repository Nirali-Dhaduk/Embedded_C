#include <stdio.h>
int main (){
    int num;
    printf("Enter the size of pyramid");
    scanf("%d",&num);
    int i;
    for(i=1;i<=num ;i++){
        int j;
        for(j=1;j<=num ;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}