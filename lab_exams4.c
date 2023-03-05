#include <stdio.h>
int size = 10;
int arr[10];
int r = -1;
int f = -1;
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
        printf("Enter the element you want to insert: ");
        scanf("%d", &val);
        f = f + 1;
        arr[f] = val;
    }
}
int dequeue()
{
    if (isEmpty())
    {
        printf("Queue underflow\n");
    }
    else
    {
        int val;
        val = arr[r];
        r = r + 1;
        return val;
    }
}
void display()
{
    for (int i = r + 1; i <= f; i++)
    {
        printf("Element is: %d\n", arr[i]);
    }
}
int main()
{
    int choice, a;
    do
    {
        printf("Enter your choice 1.enqueue\n 2.dequeue\n 3.display\n");
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
            printf("enter the correct choice\n");
            break;
        }
        printf("Press 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}