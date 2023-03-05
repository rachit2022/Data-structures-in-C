#include <stdio.h>
void printArray(int *A, int n)
{
    printf("Displaying the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void insertionSort(int *A, int n)
{
    int indexofMin, temp;
    for (int i = 0; i < n; i++)
    {
        indexofMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofMin])
            {
                indexofMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexofMin];
        A[indexofMin] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Entering the element of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}