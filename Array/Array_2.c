//print elements of an array in reverse order
#include <stdio.h>
#define N 10
int main(){
  int  a[N]= {3,6,3,5,8,9,2,3,4,9};
  int i;
  for(i = (N-1);i >= 0;i--){
    printf("%d\n",a[i]);
  }

// for(i=0;i<N;i++){
//     printf("%d\n",a[i]); 
// }
    return 0;
}