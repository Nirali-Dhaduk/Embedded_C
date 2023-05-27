//program to take input array and print it
#include <stdio.h>
#define N 10 
int main(){
int number[N];
int i;


for(i=0;i<N;i++){
printf("enter the number for index %d:",i);
scanf("%d",&number[i]);
}
for(i=0;i<N;i++)
{
    printf("value:%d\n",number[i]);
}    return 0;
}