#include <stdio.h>
void printArray(int A[], int n)
{
    printf("Displaying the elements\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void insertionSort(int A[], int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
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
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, n);
    printf("After sorting the element of an array\n");
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}