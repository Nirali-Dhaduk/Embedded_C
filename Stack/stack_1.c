#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack s;
    s.size = 6;
    s.top = -1;
    s.arr = (int *)malloc(sizeof(s.size * sizeof(int)));
    s.arr[0] = 10;
    s.top++;
    if(isEmpty(&s)){
        printf("stack is Empty");

    }
    else{
        printf("stack is not Empty");
    }
    return 0;
}