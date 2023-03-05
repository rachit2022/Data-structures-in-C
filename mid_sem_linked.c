#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertatbeg(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = head;
    head = ptr;
    return ptr;
}
struct node *insertatend(struct node *head, int val)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node *p = (struct node *)malloc(sizeof(struct node));
    ptr->next = p;
    p->data = val;
    p->next = NULL;
    return head;
}
struct node *insertatanynode(struct node *head, struct node *previousNode, int val)
{
    struct node *ptr = head;
    while (ptr->next != previousNode)
    {
        ptr = ptr->next;
    }
    struct node *p = (struct node *)malloc(sizeof(struct node));
    ptr->next = p;
    p->data = val;
    p->next = previousNode;
    return head;
}
struct node *deleteatbeg(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}
struct node *deleteatend(struct node *head, struct node *lastsec)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    lastsec->next = NULL;
    free(ptr);
    return head;
}
struct node *deleteatanynode(struct node *head, struct node *previousnode)
{
    struct node *ptr = head;
    while (ptr->next != previousnode)
    {
        ptr = ptr->next;
    }
    ptr->next = previousnode->next;
    free(previousnode);
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = NULL;
    int choice, a;
    do
    {
        printf("Enter your choice given below\n 1.Insert at beginning\n 2.Insert at end\n 3.Insert at any node\n 4.Delete at beginning\n   5.Delete at end\n 7.Delete at any node\n 8.Traversal\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insertatbeg(head, 60);
            linkedlistTraversal(head);
            break;
        case 2:
            head = insertatend(head, 70);
            linkedlistTraversal(head);
            break;
        case 3:
            head = insertatanynode(head, second, 80);
            linkedlistTraversal(head);
            break;
        case 4:
            head = deleteatbeg(head);
            linkedlistTraversal(head);
            break;
        case 5:
            head - deleteatend(head, third);
            linkedlistTraversal(head);
            break;
        case 6:
            head = deleteatanynode(head, third);
            linkedlistTraversal(head);
            break;
        case 7:
            linkedlistTraversal(head);
            break;
        default:
            printf("******Enter the correct option******\n");
            break;
        }
        printf("Press 1 to contiune: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}
