#include <stdio.h>
int n = 10, top = -1;
int arr[10];
int isEmpty(int top)
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
int isFull(int top)
{
    if (top == n - 1)
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
    int element;
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the element you want to insert: ");
        scanf("%d", &element);
        top++;
        arr[top] = element;
    }
}
int pop()
{
    if (isEmpty(top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int val;
        val = arr[top];
        top--;
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
    int choice, a = 1;
    do
    {
        printf("Enter your choice: \n1.Push\n2.Pop\n3.Display\n4.Exit: ");
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
            return 0;
        }
        printf("Press 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}