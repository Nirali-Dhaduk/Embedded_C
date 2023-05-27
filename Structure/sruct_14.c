#include <stdio.h>
typedef struct student {
    char name[30];
    int age ;
    int marks;

}s;
void print(s *o){
    printf("Name:%s\n",o->name);
    printf("age:%d\n",o->age);
    printf("marks:%d\n\n",o->marks);
}
int main(){
s obj[3] ={{"joe",12,13},{"michael",10,25},{"carter",19,100}};
print(&obj[0]);
print(&obj[1]);
print(&obj[2]);

    return 0;
}