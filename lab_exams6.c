#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("Elemnt is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertatBeg(struct node *head, int val)
{
    struct node *ptr = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    p->next = head;
    return p;
}
struct node *insertatMid(struct node *head, struct node *previousNode, int val)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    while (ptr->next != previousNode)
    {
        ptr = ptr->next;
    }
    p->data = val;
    p->next = ptr->next;
    ptr->next = p;
    return head;
}
struct node *insertatEnd(struct node *head, int val)
{
    struct node *ptr = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    p->data = 80;
    ptr->next = p;
    p->next = NULL;
    return head;
}
struct node *deleteatBeg(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}
struct node *deleteatAnynode(struct node *head, struct node *previousNode)
{
    struct node *ptr = head;
    while (ptr->next != previousNode)
    {
        ptr = ptr->next;
    }
    ptr->next = previousNode->next;
    free(previousNode);
    return head;
}
struct node *deleteatEnd(struct node *head, struct node *lastsec)
{
    struct node *ptr = head;
    while (ptr->next != lastsec)
    {
        ptr = ptr->next;
    }
    ptr->next = lastsec->next;
    free(lastsec);
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
        printf("Enter your choice:\n 1.Insert at Beginning\n2.Insert at Anynode\n3.Insert at End\n 4.Delete at Beginning\n 5.Delete at Anynode\n 6.Delete at End\n 7.Display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insertatBeg(head, 60);
            linkedListTraversal(head);
            break;
        case 2:
            head = insertatMid(head, second, 70);
            linkedListTraversal(head);
            break;
        case 3:
            head = insertatEnd(head, 80);
            linkedListTraversal(head);
            break;
        case 4:
            head = deleteatBeg(head);
            linkedListTraversal(head);
            break;
        case 5:
            head = deleteatAnynode(head, second);
            linkedListTraversal(head);
            break;
        case 6:
            head = deleteatEnd(head, fourth);
            linkedListTraversal(head);
            break;
        case 7:
            linkedListTraversal(head);
            break;
        default:
            printf("Enter the correct the choice\n");
            break;
        }
        printf("Press 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}