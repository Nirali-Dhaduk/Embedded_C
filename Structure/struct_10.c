#include <stdio.h>
struct student{
    char name[30];
    int age ;
    int marks;
};
void fun(struct student *ptr){
    printf("name:%s , age:%d , marks:%d\n",ptr->name, ptr->age,ptr->marks);
}
int main(){
struct student s1 = {"jack",10,30};
struct student s2 = {"joe",20,50};
fun(&s1);
fun(&s2);

    return 0;
}