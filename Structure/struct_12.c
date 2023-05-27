#include <stdio.h>
struct point{
    int x;
    int y;
};
void print(struct point arr[]){
    int i;
    for(i=0;i<2;i++){
        printf("x = %d , y = %d\n",arr[i].x,arr[i].y);
    }
}
int main(){
struct point arr[2] = {{3,4},{0,1}};
print(arr);

    return 0;
}