#include <stdio.h>
int main(){
    int power=1,base,p,i,n;
     printf("Enter a Base value:\n");
    scanf("%d",&base);
    printf("Enter a power value:\n");
    scanf("%d",&p);
   

    n=p;

    for(i=1;i<=n;i++){
        power=power*base;
    }printf("%d to the power of %d is %d  \n",base,p,power);
    return 0;
}