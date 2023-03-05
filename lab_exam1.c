#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elemnt in the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("The element is present at index: %d\n", i + 1);
            break;
        }
    }
    return 0;
}