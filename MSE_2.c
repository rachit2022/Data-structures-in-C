#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number the size of an array: ");
    scanf("%d", &n);
    int arr[n], first, middle, last, element;
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    printf("enter the element you want to search: ");
    scanf("%d", &element);
    while (first <= last)
    {
        if (arr[middle] > element)
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
        else if (arr[middle] < element)
        {
            first = middle + 1;
            middle = (first + last) / 2;
        }
        else
        {
            printf("The element is found at the index: %d\n", middle + 1);
            break;
        }
    }
    if (first > last)
    {
        printf("The element is not found in the array\n");
    }
    return 0;
}