#include <stdio.h>

void my_function()
{
    static int variable_name = 10;
    variable_name++;
    
    printf("%d\n",variable_name);
}

int main() {

    my_function(); 
    my_function(); 
    
}
