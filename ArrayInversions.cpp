#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {4, 5, 1, 2, 3};
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < j && arr[i] > arr[j])
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}