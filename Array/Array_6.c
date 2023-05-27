//application of Designated initializer
#include <stdio.h>
int main(){
    int arr[6] = {[2]=3,[4]=5};
    int i;
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}