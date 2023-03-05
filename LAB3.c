#include <stdio.h>
int main()
{
    int n, element;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Entering the element in an array\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the element you want to search: ");
    scanf("%d", &element);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == element)
        {
            printf("%d is found at the index %d\n", element, i);
            break;
        }
    }
    return 0;
}