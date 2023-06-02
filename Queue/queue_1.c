#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int count;
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("queue overflow");
    }
    else
    {
        q->r++;
        q->arr[q->r] = data;
        q->count++;
    }
}
int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("queue is empty");
    }
    else
    {
        q->f++;
        return q->arr[q->f];
    }
    return -1;
}
void displayQueue(struct queue *q)
{
    int i = 0;
    while (i < q->count)
    {
        printf("%d\n", q->arr[i]);
        i++;
    }
}
int main()
{
    struct queue q;
    q.count = 0;
    q.size = 10;
    q.f = q.r = -1;
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q);
    printf("%d\n", dequeue(&q));

    return 0;
}