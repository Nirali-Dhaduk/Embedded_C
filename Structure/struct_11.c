#include <stdio.h>
#include <stdlib.h>

struct student{
    int age;
    int marks;

};
struct student* fun(int a,int b ){
    struct student *ptr = (struct student*)malloc(sizeof(struct student));
    ptr->age = a;
   ptr->marks  = b+5;
     return ptr;
    
}
void print(struct student *ptr){
    printf("Age:%d, Marks:%d\n",ptr->age,ptr->marks);
}
int main(){
struct student *ptr1,*ptr2;

ptr1 = fun(20,50);
ptr2 = fun(21,55);
print(ptr1);
print(ptr2);
free(ptr1);
free(ptr2);
    return 0;
}