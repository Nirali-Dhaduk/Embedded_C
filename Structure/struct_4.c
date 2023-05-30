#include <stdio.h>
 struct abc{
        int a;
        int b;
        int c;
    };
int main(){
   
    struct abc a1 = {10,20,20};
    printf("%d %d %d",a1.a,a1.b,a1.c);
    return 0;
}