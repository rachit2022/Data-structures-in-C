#include <stdio.h>
#define MAX 10
int size = MAX;
int r = -1;
int f = -1;
int arr[MAX];
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
        printf("Enter the element you want to enqueue: ");
        scanf("%d", &val);
        f++;
        arr[f] = val;
    }
}
void dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow\n");
    }
    else
    {
        int val;
        val = arr[r];
        r++;
    }
}
void display()
{
    printf("Displaying the element of array\n");
    for (int i = r + 1; i <= f; i++)
    {
        printf("%d ", arr[i]);
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
            printf("Enter the correct choice\n");
            break;
        }
        printf("Press 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}