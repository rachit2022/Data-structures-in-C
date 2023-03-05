#include <stdio.h>
int f = -1;
int r = -1;
int size = 10;
#define MAX 10
int a[MAX];
int isEmpty()
{
    if (f == r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if (f == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue()
{
    if (isFull())
    {
        printf("Queue overflow\n");
    }
    else
    {
        int val;
        printf("enter the element you want to insert: ");
        scanf("%d", &val);
        f = f + 1;
        a[f] = val;
    }
}
void dequeue()
{
    if (isEmpty())
    {
        printf("Queue underflow\n");
    }
    else
    {
        int val;
        val = a[r];
        r = r + 1;
        printf("Element dequeue sucessfully!\n");
    }
}
void display()
{
    for (int i = r + 1; i <= f; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int choice, a;
    do
    {
        printf("Enter your choice\n1.Enqueue\n2.Dequeue\n3.Display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("Please enter the correct choice\n");
        }
        printf("Press 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}