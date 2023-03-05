#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int r;
    int f;
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
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue overflow\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
    }
    else
    {
        q->f++;
        int a = q->arr[q->f];
        return a;
    }
}
int main()
{
    struct queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    enqueue(&q, 12);
    enqueue(&q, 2);
    if (isFull(&q))
    {
        printf("Queue is Full\n");
    }
    printf("Dequeuing the element %d\n", dequeue(&q));
    printf("Dequeuing the element %d\n", dequeue(&q));
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    return 0;
}