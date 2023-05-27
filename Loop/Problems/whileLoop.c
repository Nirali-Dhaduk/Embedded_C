#include <stdio.h>
int main (){
    //print 1 to n
    int n,i=1;
   
    printf("Enter the num:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    //print A to Z using while loop
  char ch = 'A';
  while(ch<='Z'){
    printf("%c\n",ch);
    ch++;
  }
    return 0;
}