#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements of an array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Displaying the elements of an array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int element, index;
    printf("\nEnter the element you want to insert: ");
    scanf("%d", &element);
    printf("Enter the index at which you want to insert the element: ");
    scanf("%d", &index);
    n++;
    for (int i = n - 1; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index - 1] = element;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}