#include <stdio.h>
struct student{
        char name[20];
        int age;
    
    };
    void fun(struct student s);
int main(){
  struct student s1;
   printf("Enter name: ");
   scanf("%[^\n]%*c", s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);
    
    
    fun(s1);
 
    return 0;
}
void fun(struct student s1){
        printf("Student Detail:\n");
        printf("Name:%s\n",s1.name);
        printf("age:%d\n",s1.age);
    }