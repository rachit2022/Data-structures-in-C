#include <stdio.h>
#include <stdlib.h>
struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct circularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueued element is %d\n", val);
    }
}
int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 22);
    enqueue(&q, 32);
    printf("The element dequeued is %d\n", dequeue(&q));
    printf("The element dequeued is %d\n", dequeue(&q));
    printf("The element dequeued is %d\n", dequeue(&q));
    enqueue(&q, 52);
    enqueue(&q, 52);
    enqueue(&q, 52);
    if (isEmpty(&q))
    {
        printf("The queue is empty\n");
    }
    if (isFull(&q))
    {
        printf("The queue is full\n");
    }
    return 0;
}