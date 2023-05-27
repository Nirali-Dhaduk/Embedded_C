#include <stdio.h>
    struct student{
        int age;
        int marks;
    };
void fun(struct student a){
    printf("age:%d , marks:%d",a.age,a.marks);
}
int main(){
  struct student s1 = {19,50};
  struct student s2 = {20,30};
  fun(s1);
  fun(s2);
    return 0;
}