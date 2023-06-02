// stack implementation using linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTravesal(struct node *top)
{
    while (top != NULL)
    {

        printf("Element: %d\n", top->data);
        top = top->next;
    }
}
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (isFull(top))
    {
        printf("stack overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct node** top)
{
    if (isEmpty(*top))
    {
        printf("stack underflow");
    }
    else
    {
        struct node *p = *top;

        *top = (*top)->next;
        int x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    struct node *top = NULL;
    ;
    top = push(top, 10);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);

    top = push(top, 10);
    top = push(top, 2);
    linkedlistTravesal(top);
    printf("popped element:%d\n", pop(&top));

    linkedlistTravesal(top);
    //  printf("element:%d",top->data);
    return 0;
}