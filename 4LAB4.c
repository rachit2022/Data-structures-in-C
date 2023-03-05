#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Entering the element of ana array\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    int element;
    printf("\nEnter the element you have to found: ");
    scanf("%d", &element);
    int low = 1;
    int high = n;
    int mid = (low + high) / 2;
    while (low < high)
    {
        if (a[mid] > element)
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        else if (a[mid] < element)
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else
        {
            printf("%d is found at the index %d\n", element, mid);
            break;
        }
    }
    if (low > high)
    {
        printf("Element is not found in the given array\n");
    }
    return 0;
}