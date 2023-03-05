#include <stdio.h>
int arr[10];
int size = 10;
int top = -1;
int isEmpty()
{
    if (top == -1)
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
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push()
{
    if (isFull())
    {
        printf("Stack overflow\n");
    }
    else
    {
        int val;
        printf("enter the element you want to insert: ");
        scanf("%d", &val);
        top = top + 1;
        arr[top] = val;
    }
}
int pop()
{
    if (isEmpty())
    {
        printf("stack underflow\n");
    }
    else
    {
        int val;
        val = arr[top];
        top = top - 1;
        return val;
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("Element is: %d\n", arr[i]);
    }
}
int main()
{
    int choice, a;
    do
    {
        printf("Enter the choice: 1.Push\n 2.Pop\n 3.Display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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