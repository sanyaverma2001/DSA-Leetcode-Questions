
#include <stdio.h>
#include <stdlib.h>
#define N 4

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int low, int high)
{
    int l = low;
    int hi = high;
    int *arr_ptr = (int *)arr;

    int pivot = 5;
    do
    {
        while (*(arr_ptr + l) < pivot)
            l++;
        while (*(arr_ptr + hi) > pivot)
            hi--;
        if (l <= hi)
        {
            swap((arr_ptr + l), (arr_ptr + hi));
            l++;
            hi--;
        }
    } while (l <= hi);
}

int main()
{
    int arr[N][N] = {{9, 8, 7, 11}, {6, 5, 4, 0}, {3, 2, 10, -2}, {34, -11, 23, 56}};
    int *arr_ptr = arr;
    int row, column;

    printf("The array before sorting :\n");
    for (row = 0; row < N; row++)
    {
        for (column = 0; column < N; column++)
        {
            printf("%3d", arr[row][column]);
        }
        printf("\n");
    }

    quickSort(arr_ptr, 0, (N * N) - 1);

    printf("\nThe array after sorting :\n");
    for (row = 0; row < N; row++)
    {
        for (column = 0; column < N; column++)
        {
            printf("%3d", arr[row][column]);
        }
        printf("\n");
    }
    return 0;
}
