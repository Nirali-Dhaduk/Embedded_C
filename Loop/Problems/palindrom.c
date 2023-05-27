#include <stdio.h>
int main(){
    
    int num,result = 0 , reminder,q;
    printf("Enter the number:");
    scanf("%d",&num);
   q = num;
   while(q!=0)
    {
        reminder = q%10;
        result = result*10 + reminder;
        q = q/10;
       
}
    if(num == result){
        printf("Its pailindrom\n");

    }
    else{
        printf("not pilindrom\n");
    }
    


    return 0 ;

}