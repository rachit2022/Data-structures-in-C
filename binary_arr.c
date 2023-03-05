#include <stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int low, high, mid;
    low = 0;
    high = size-1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12, 24, 36, 48, 60, 82, 99,100};
    int size = sizeof(arr) / sizeof(int);
    int element = 48;
    int indexSearch = binarySearch(arr, size, element);
    printf("The element %d is found at index: %d", element,indexSearch);
    return 0;
}