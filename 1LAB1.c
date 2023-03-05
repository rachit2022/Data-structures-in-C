#include <stdio.h>
void printArray(int a[], int n)
{
    printf("Displaying the elements of array\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertionSort(int a[], int n)
{
    int key, j;
    for (int i = 1; i <= n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of an array\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}