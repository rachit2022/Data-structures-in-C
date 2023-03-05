#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n], first = 0, last = n - 1;
    int middle = (first + last) / 2;
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter the element you want to found: ");
    scanf("%d", &element);
    while (first < last)
    {
        if (arr[middle] < element)
        {
            first = middle + 1;
            middle = (first + last) / 2;
        }
        else if (arr[middle] > element)
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
        else
        {
            printf("Element found at the index: %d\n", middle + 1);
            break;
        }
    }
    if (first > element)
    {
        printf("Element is not found in the array\n");
    }
    return 0;
}