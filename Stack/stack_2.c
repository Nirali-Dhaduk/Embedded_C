
#include <stdio.h>
#include <stdlib.h>
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
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow");
        return -1;
    }
    else
    {

        ptr->top--;
        return ptr->arr[ptr->top + 1];
    }
}
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    int i = 0;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    push(sp, 10);
    push(sp, 20);
    push(sp, 30);
    push(sp, 40);
    push(sp, 90);
    printf("Values in the stack:\n");
    for (i = 0; i <= sp->top; i++)
    {
        printf("%d\n", sp->arr[sp->top - i]);
    }
    printf("Element:%d\n", sp->arr[sp->top]);

    printf("popped value:%d\n", pop(sp));
    //   printf("peek value:%d\n", peek(sp));

    printf("empty status:%d\n", isEmpty(sp));
    printf("full status:%d\n", isFull(sp));
    printf("stack Bottom element:%d\n", stackBottom(sp));

    printf("stack top element:%d\n", stackTop(sp));
    return 0;
}
