//program to find minimum and maximum numbers from array
#include <stdio.h>
void MinMax(int arr[],int *min,int *max,int length){
    int i;
  *min = *max = arr[0];
    for(i=1;i<length;i++){
     
        if (arr[i]<*min){
            *min = arr[i];
        }
       else if (arr[i]>*max){
            *max = arr[i];
        }
        
    }
       printf("minimum number is :%d and maximum number is %d in the array",*min,*max);
    }

int main(){
    int arr[]={3,2,1,4,50,9};
    int min,max;
    int length = sizeof(arr)/sizeof(arr[0]);
    MinMax(arr,&min,&max,length);
   
    return 0;
}
