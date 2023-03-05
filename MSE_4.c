#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n], index;
    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Element is: %d\n", arr[i]);
    }
    printf("Enter the index of the element you want to delete: ");
    scanf("%d", &index);
    for (i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Printing the array after deletion of element\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("Element is: %d\n", arr[i]);
    }
    return 0;
}