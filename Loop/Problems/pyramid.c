#include <stdio.h>
int main (){
    int n;
    printf("Enter the size of the pyramid");
    scanf("%d",&n);
    int i;
    
    for(i=1;i<=n;i++){
        int j;
        for(j=1; j <= (2*n - 1) ;j++){
            if (j>=n-(i-1)&& j<=n+i-1){
            printf("*");

        }
        else { 
            printf(" ");
        } 
       
    }printf("\n");
    
}

return 0;
}