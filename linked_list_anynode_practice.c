#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr->next != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertAtAnyNode(struct node *head, struct node *previousNode)
{
    int val;
    printf("Enter the element to be inserted: ");
    scanf("%d", &val);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = previousNode->next;
    previousNode->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    head->data = 25;
    head->next = first;
    first->data = 35;
    first->next = second;
    second->data = 45;
    second->next = third;
    third->data = 55;
    third->next = fourth;
    fourth->data = 65;
    fourth->next = fifth;
    fifth->data = 75;
    fifth->next = NULL;
    printf("Before entering the element: \n");
    linkedListTraversal(head);
    head = insertAtAnyNode(head, third);
    printf("After enetering the element: \n");
    linkedListTraversal(head);
    return 0;
}