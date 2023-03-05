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
    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == element)
        {
            printf("%d is found at the index %d\n", element, i);
        }
    }
    return 0;
}