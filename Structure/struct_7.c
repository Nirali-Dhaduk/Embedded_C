#include <stdio.h>
typedef struct student{
    char name[20];
    int marks;
}student;
void display(struct student s){
    printf("Name:%s\n",s.name);
    printf("Marks:%d",s.marks);
}
int main(){
student s1 = {"Nirali",450};
display(s1);
    return 0;
}