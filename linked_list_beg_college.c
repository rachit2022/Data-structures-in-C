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
struct node *insertAtFirst(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = head;
    return ptr;
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
    printf("Before inserting the element\n");
    LinkedListTraversal(head);
    head = insertAtFirst(head, 94);
    printf("After inserting the element\n");
    LinkedListTraversal(head);
    return 0;
}