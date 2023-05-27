#include <stdio.h>
int main(){
    union data
    {
       int a;
       char b;
    }d;
    d.a = 65;
    printf("variable 1:%d\nvariable 2:%c",d.a,d.b);
    return 0;
}