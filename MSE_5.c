#include <stdio.h>
int n = 10;
int arr[10];
int f = -1;
int r = -1;
void enqueue()
{
    int element;
    if (r == n - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter the element your have insert: ");
        scanf("%d", &element);
        r = r + 1;
        arr[r] = element;
    }
}
int dequeue()
{
    if (r == f)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int val;
        val = arr[f];
        f = f + 1;
        return val;
    }
}
void display()
{
    for (int i = f + 1; i <= r; i++)
    {
        printf("Element is: %d\n", arr[i]);
    }
}
int main()
{
    int choice, a;
    do
    {
        printf("Enter your choice\n 1.enqueue\n2.dequeue\n3.display\n4.exit: ");
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
            return 0;
        }
        printf("Press 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}