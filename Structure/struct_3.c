#include <stdio.h>
struct marks{
int a;
int b;
}m1;
int main(){
    struct marks m1 = { .b = 8,.a=70};
    printf("%d %d",m1.a,m1.b);
    return 0;
}