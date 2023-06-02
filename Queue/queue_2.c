#include <stdio.h>
#include <stdlib.h>
struct node *f = NULL;
struct node *r = NULL;
struct node
{

    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    printf("printing the element:\n");
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
void Enqueue( int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n==NULL)
    {
        printf("queue is full");
    }
    else
    {
        n->data = data;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int main()
{

    Enqueue(5);
    Enqueue(10);
    display(f);
    return 0;
}