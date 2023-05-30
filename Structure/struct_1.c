#include <stdio.h>
typedef  struct student{
        char name[20];
        int age;
        int marks;
    }s;
int main(){

        s c[2];
    int i;
    for(i=0;i<2;i++){
        printf("Enter the Name of the student %d : " ,i+1);
        scanf("%s",&c[i].name);
        printf("Enter the age of student %d : ",i+1);
        scanf("%d",&c[i].age);
        printf("Enter the obtained marks by student %d : ",i+1);
        scanf("%d",&c[i].marks);
    }
    printf("\n");
     for(i=0;i<2;i++){
        printf("Student %d Detail:\n",i+1);
        printf("Name: %s\n",c[i].name);
        printf("Age: %d\n",c[i].age);
        printf("Marks: %d\n",c[i].marks);
        printf("\n");
     }
    
    return 0;
}
