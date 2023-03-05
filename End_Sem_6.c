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
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void PreOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void PostOrder(struct node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}
void InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}
struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
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
struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *deleteNode(struct node *root, int value)
{
    struct node *ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left, ipre->data);
    }
    return root;
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
        printf("Enter your choice\n1.Preorder\n2.Postorder\n3.Inorder\n4.Searching element\n5.Insert an element\n6.Delete Node\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            PreOrder(p);
            break;
        case 2:
            PostOrder(p);
            break;
        case 3:
            InOrder(p);
            break;
        case 4:
            int k;
            printf("Enter the element you have to search: ");
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
        case 6:
            printf("Enter the element you want to delete: ");
            scanf("%d", &k);
            deleteNode(p, k);
            break;
        default:
            printf("\nEnter the correct choice\n");
            break;
        }
        printf("\npress 1 to continue: ");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}