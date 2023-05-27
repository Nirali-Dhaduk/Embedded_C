//print each element of 2D Array
#include <stdio.h>
int main(){
        int i,j;
    int arr[2][3] = {{12,13,14},{15,16,17}};
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}