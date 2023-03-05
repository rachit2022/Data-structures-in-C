#include <stdio.h>
int size = 10;
int a[10];
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
        printf("Enter the element you want to insert: ");
        scanf("%d", &val);
        top++;
        a[top] = val;
    }
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack underflow\n");
    }
    else
    {
        int val;
        val = a[top];
        top--;
        printf("Element popped sucessfully!\n");
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
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
        printf("Enter your choice\n1.Push\n2.Pop\n3.Display\n");
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
            printf("Please enter the correct choice\n");
        }
        printf("Press 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}