#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the size of an element: ");
    scanf("%d", &n);
    int arr[n], element;
    printf("Enter the elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("The element found at the index: %d\n", i+1);
        }
    }
    return 0;
}