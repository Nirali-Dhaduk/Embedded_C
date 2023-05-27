#include <stdio.h>
int main(){
printf("Enter binary number:");
int binary,rem;
scanf("%d",&binary);
int weight =1,decimal =0;
while(binary!=0){
    rem = binary%10;
    decimal = decimal + rem*weight;
    binary = binary/10;
    weight = weight*2;
}
printf("%d",decimal);
    return 0;
}