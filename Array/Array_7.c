// print each element of 3D array 
#include <stdio.h>
int main(){
    int arr[2][3][3] = {{{3,4,5},{6,7,8},{8,9,0}},{{10,11,12},{13,14,15},{16,17,18}}};
    int i,j,k;
    for(i=0;i<2;i++){
       for(j=0;j<3;j++){
        for(k=0;k<3;k++){
            printf("%d",arr[i][j][k]);
        }
       }
    }
    return 0;
}