#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    unsigned temp;
    for (int i = 0; i < 5; i++)
    {
        temp = ptr;
        if (temp % 2 == 0)
        {
            *(ptr) = *(ptr) + 10;
        }
        ptr++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}