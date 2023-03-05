#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quicksort(int A[], int low, int high)
{
    int partionIndex;
    if(low<high)
    {
       partionIndex = partition(A, low, high);
       quicksort(A, low, partionIndex - 1);
       quicksort(A, partionIndex + 1, high);
    }
}
int main()
{
    int A[] = {120, 12, 58, 41, 36, 98, 87};
    int n = 7;
    printf("Before doing the quicksort\n");
    printArray(A, n);
    quicksort(A, 0, n - 1);
    printf("After doing the quicksort\n");
    printArray(A, n);
    return 0;
}