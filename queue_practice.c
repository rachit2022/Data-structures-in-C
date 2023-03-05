#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *ptr)
{
    if (ptr->f == ptr->r)
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
void push(struct queue *ptr)
{
    if (isFull(ptr))
    {
        printf("Overflow\n");
    }
    else
    {
        int val;
        printf("Enter the element to be inserted: ");
        scanf("%d", &val);
        ptr->r++;
        ptr->arr[ptr->r] = val;
    }
}
int pop(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Underflow\n");
    }
    else
    {
        int val;
        ptr->f++;
        val = ptr->arr[ptr->f];
        return val;
    }
}
void show(struct queue *ptr)
{
    for (int i = ptr->f+1; i <= ptr->r; i++)
    {
        printf("Element is: %d\n", ptr->arr[i]);
    }
}
int main()
{
    int choice;
    struct queue *sp = (struct queue *)malloc(sizeof(struct queue));
    sp->f = sp->r = -1;
    sp->size = 8;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(sp);
            break;
        case 2:
            pop(sp);
            break;
        case 3:
            show(sp);
        default:
            return 0;
        }
    }
    return 0;
}