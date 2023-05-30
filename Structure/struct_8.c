#include <stdio.h>
struct student{
        int marks;
        char grade;
    };
    struct student s = {50,'A'};
    void print(char grade,int marks){
printf("%c %d",grade,marks);
    };
int main(){
    
    print(s.grade,s.marks);
    return 0;
}