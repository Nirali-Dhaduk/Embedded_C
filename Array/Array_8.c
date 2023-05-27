//program to find  sum of Row
#include <stdio.h>
int main(){
    int arr[2][2] = {{2,3},{4,5}};
    int i,j,sum;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum = sum + arr[i][j];
        
        }printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}