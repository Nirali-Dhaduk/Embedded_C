#include <stdio.h>
int main(){
    int day;
printf("Enter a day:");

scanf("%d",&day);
// printf("%d",day);
int dayOfWeek = day%7;
switch (dayOfWeek)
{
case 0:
   printf("Monday\n");
    break;
    case 1:
   printf("Tuesday\n");
    break;
    case 2:
   printf("Wednesday\n");
    break;
    case 3:
   printf("Thurday\n");
    break;
    case 4:
   printf("Friday\n");
    break;
    case 5:
   printf("Saturday\n");
    break;
    case 6:
   printf("Sunday\n");
    break;
default:
    break;
}
// int i = 0;
// for (printf("one\n");i<=3 && printf("");i++){
// printf("hello");
// }

    return 0;
}