#include <stdio.h>
int main(){
    struct abc{
        int a;
        int b;
        int c;
    };
    struct abc a1 = {10,20,20};
    printf("%d %d %d",a1.a,a1.b,a1.c);
    return 0;
}