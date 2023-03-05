#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubble_sort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Sorting on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    printf("Before sorting the element\n");
    printArray(A, n);
    bubble_sort(A, n);
    printf("After sorting the element\n");
    printArray(A, n);
    return 0;
}