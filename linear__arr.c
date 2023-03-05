#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12, 25, 64, 84, 35, 122, 41, 20, 30, 700};
    int size = sizeof(arr) / sizeof(int);
    int element = 122;
    int SearchIndex = linearSearch(arr, size, element);
    printf("The element %d is found at index %d", element, SearchIndex);
    return 0;
}