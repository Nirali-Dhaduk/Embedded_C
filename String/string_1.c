#include <stdio.h>
#include <string.h>

int main(){
    char ch[10] = "Hello";
    char ch0[10];
    strcpy(ch0,ch);
    printf("%s",ch0);
    // printf("%s",ch);
    return 0;
}