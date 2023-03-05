#include <stdio.h>
void printArray(int A[], int n)
{
    printf("Displaying the element\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int A[], int n)
{
    int temp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array: ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, n);
    printf("After sorting the element of an array\n");
    bubbleSort(a, n);
    printArray(a, n);
    return 0;
}