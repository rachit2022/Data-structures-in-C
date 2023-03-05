#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head;
void ins()

{
    int n;
    printf("Enter number of nodes required: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct node *ptr;
        int item;
        ptr = malloc(sizeof(struct node));
        if (ptr == NULL)
        {
            printf("Overflow");
        }
        else
        {
            scanf("%d", &item);
            ptr->data = item;
            ptr->link = head;
            head=ptr;
        }
    }
}
void count()
{
    int count = 0;
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("Count of nodes: %d \n", count);
}
void display()
{
    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    ins();

    count();
    display();
}