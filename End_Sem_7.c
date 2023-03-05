#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
}
struct node *preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
    return root;
}
struct node *inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
    return root;
}
struct node *postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
struct node *search(struct node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        return root;
    }
    else if (data < root->data)
    {
        search(root->left, data);
    }
    else
    {
        search(root->right, data);
    }
}
void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot insert the element in the BST already exist!!\n");
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(key);
    if (prev->data > key)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}
int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    int choice, a;
    do
    {
        printf("Enter your choice\n1.Pre order\n2.In order\n3.Post order\n4.search\n5.Insert\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            preorder(p);
            break;
        case 2:
            inorder(p);
            break;
        case 3:
            postorder(p);
            break;
        case 4:
            int k;
            printf("Enter the elememt you want to search: ");
            scanf("%d", &k);
            struct node *n = search(p, k);
            if (n != NULL)
            {
                printf("Found: %d\n", n->data);
            }
            else
            {
                printf("Element not found\n");
            }
            break;
        case 5:
            printf("Enter the element you want to insert: ");
            scanf("%d", &k);
            insert(p, k);
            break;
        default:
            printf("Enter the correct choice\n");
        }
        printf("\nPress 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}