#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertAtMiddle(struct node *head, int index, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    for (i = 0; i < index; i++)
    {
        p = p->next;
    }
    ptr->data = val;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 54;
    head->next = first;
    first->data = 64;
    first->next = second;
    second->data = 74;
    second->next = third;
    third->data = 84;
    third->next = NULL;
    printf("Before insertion\n");
    LinkedListTraversal(head);
    head = insertAtMiddle(head, 0, 94);
    printf("After insertion\n");
    LinkedListTraversal(head);
    return 0;
}