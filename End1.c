#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int element, found = 0;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            found = i + 1;
            break;
        }
    }
    if (found)
    {
        printf("%d is found at the index %d\n", element, found);
    }
    else
    {
        printf("Element is not present in the array\n");
    }
    return 0;
}