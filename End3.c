#include <stdio.h>
#define MAX 10
int size = 10;
int top = -1;
int arr[MAX];
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
    if (isFull(top))
    {
        printf("Stack overflow\n");
    }
    else
    {
        int val;
        printf("Enter the element you want to push: ");
        scanf("%d", &val);
        top++;
        arr[top] = val;
    }
}
void pop()
{
    if (isEmpty(top))
    {
        printf("Stack underflow\n");
    }
    else
    {
        int val;
        val = arr[top];
        top--;
    }
}
void display()
{
    printf("Displaying all the elements\n");
    for (int i = top; i >= 0; i--)
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
        printf("Enter your choice\n1.push\n2.pop\n3.Display\n");
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
        printf("Press 1 to contiune: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}