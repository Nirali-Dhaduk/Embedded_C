#include <stdio.h>
typedef struct student{
    int marks;
}student;
void fun(student s){
    printf("marks:%d",s.marks);
}
int main(){
 student s = {300};
 void (*ptr)(struct student )  = fun;

 ptr(s);
//  fun(s);
    return 0;
}