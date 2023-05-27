#include <stdio.h>
int main (){
   //Arithmetic operator
   int a = 2,b = 3;
   printf("a*b+a=%d\n",a*b+a);
  
   //Logical operator
   if (a>=2 || a!=2){
    printf("%d\n",a);
   }
   
   if (a>=2 && a!=2){
    printf("%d\n",a);
   }
   //Relational operator 
   int age;
   age = 10;
   if (age>=18){
    printf("Eligible for voting\n");
   }
   else{
    printf("Not eligible for voting\n");
   }
   //Bitwise operator
    a = a^b;
    b = a^b;
    a = a^b;
    printf("after XOR, a = %d,b = %d\n",a,b);
    char c = 7;
    c ^= 5;
    printf("%d\n",  printf("%d",c=c+3));
 //Conditional operator
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var)?(var2>23? ((var==75)?'A':0):0):0;

    printf("%d",num);

    return 0;

}