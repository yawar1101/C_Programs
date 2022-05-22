#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            swap(&A[i], &A[j]);
    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}

void Quick(int A[], int l, int h)
{
    int j;

    if (l < h)
    {
        j = partition(A, l, h);
        Quick(A, l, j);
        Quick(A, j + 1, h);
    }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, __INT_MAX__}, i;
    Quick(A, 0, 10);

    for (i = 0; i < 10; i++)
        printf("%d ", A[i]);
    printf("\n");
}