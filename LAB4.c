#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enterting the element of an array\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Displaying the element of an array\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    int element, low = 1, high = n;
    int middle = (low + high) / 2;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &element);
    while (low < high)
    {
        if (a[middle] > element)
        {
            low = middle + 1;
            middle = (low + high) / 2;
        }
        else if (a[middle] < element)
        {
            high = middle - 1;
            middle = (low + high) / 2;
        }
        else
        {
            printf("%d is found at the index %d\n", element, middle);
            break;
        }
    }
    if (low > high)
    {
        printf("Element is not present in the given array\n");
    }
    return 0;
}