#include <stdio.h>

struct store {
        int price;
       union {
           struct {
            char *color;
            // bool gear;
           }cycle;
           struct { 
           char fuel ;
           int wheels;
           }truck;
       }item;
    };
 
int main(){
 struct store c;
    c.item.cycle.color = "Red";
    c.item.truck.fuel = 'B';//b for bio-diesel
    c.item.truck.wheels = 16;
printf("color:%s\n",c.item.cycle.color);
printf("truck details:\n");
printf("number of wheels:%d\n",c.item.truck.wheels);
printf("fuel type:%c",c.item.truck.fuel);

    
    return 0;
}