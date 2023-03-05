#include <stdio.h>
void PrintArray(int A[], int n)
{
    printf("Displaying the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void SelectionSort(int A[], int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[indexOfMin] > A[j])
            {
                indexOfMin = j;
            }
        }
        temp = A[indexOfMin];
        A[indexOfMin] = A[i];
        A[i] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    PrintArray(a, n);
    SelectionSort(a, n);
    PrintArray(a, n);
    return 0;
}