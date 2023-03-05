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
    int low = 0, high = n - 1;
    int middle = (low + middle) / 2;
    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    while (low <= high)
    {
        if (a[middle] > element)
        {
            high = middle - 1;
            middle = (low + high) / 2;
        }
        else if (a[middle] < element)
        {
            low = middle + 1;
            middle = (low + high) / 2;
        }
        else
        {
            printf("%d is found at the index %d\n", element, middle + 1);
            break;
        }
    }
    if (low > high)
    {
        printf("Element is not present in the given array\n");
    }
    return 0;
}