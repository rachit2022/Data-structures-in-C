#include <stdio.h>
void PrintArray(int A[], int n)
{
    printf("Printing the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void InsertionSort(int A[], int n)
{
    int key;
    int j;
    for (int i = 0; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
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
    PrintArray(a, n);
    InsertionSort(a, n);
    PrintArray(a, n);
    return 0;
}