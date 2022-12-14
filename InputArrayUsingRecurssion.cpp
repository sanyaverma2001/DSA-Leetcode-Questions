#include <bits/stdc++.h>
using namespace std;

void input(int *arr, int n, int i)
{
    if (i == n)
        return;
    cin >> arr[i];
    input(arr, n, i + 1);
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "\n enter the size of array : ";
    cin >> n;
    int arr[n];
    input(arr, n, 0);
    print(arr, n);
}