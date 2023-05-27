#include <stdio.h>
#include <string.h>
int main(){
    struct subject{
        char name[32];
        int credit;
        char level;
    }s1;
   strcpy(s1.name,"maths");
    s1.credit = 5;
    s1.level = 'A';
    printf("Name of the subject:%s\nCredit of subject:%d\nDifficulity level of subject:%c\n",s1.name,s1.credit,s1.level);

    return 0;
}