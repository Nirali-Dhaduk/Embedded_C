#include <stdio.h>
struct student
{
    char firstname[64];
    char lastname[64];
    int id;
    int score;
};
struct student stdArr[3];
void displayDetail(struct student std)
{
    printf("Firstname: %s\n", std.firstname);
    printf("Lastname: %s\n", std.lastname);
    printf("ID: %d\n", std.id);
    printf("Score: %d\n", std.score);
};
void check(int id){
    for(int j = 0 ; j<3 ; j++){
        if(id == stdArr[j].id){
            printf("\nFirst name = %s",stdArr[j].firstname);
            printf("\nLast name = %s",stdArr[j].lastname);
            printf("\nStudent score = %d",stdArr[j].score);
        } 
    }
};

int main(void)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter detail of student #%d\n", (i + 1));

        printf("\nEnter First Name: ");
        scanf("%s", stdArr[i].firstname);

        printf("\nEnter Last Name: ");
        scanf("%s", stdArr[i].lastname);

        printf("\nEnter ID: ");
        scanf("%d", &stdArr[i].id);

        printf("\nEnter Score: ");
        scanf("%d", &stdArr[i].score);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nStudent #%d Detail:\n", (i + 1));
        displayDetail(stdArr[i]);
    }
    printf("\nEnter the student id ");
    scanf("%d", &stdArr[i].id);
    
    int id = stdArr[i].id;
    printf("\nYou enter  = %d",id);

    check(id);
    return 0;
}