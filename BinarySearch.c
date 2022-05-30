#include <stdio.h>

void binarySearch(int a[], int item, int size)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (item < a[mid])
            high = mid - 1;
        else if (item > a[mid])
            low = mid + 1;
        else if (item == a[mid])
        {
            printf("item Found");
            break;
        }
        else
        {
            printf("Not Found");
        }
    }
}

int main()
{
    int arr[] = {10, 12, 20, 32, 50, 55, 65, 80, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    binarySearch(arr, 11, size);
}