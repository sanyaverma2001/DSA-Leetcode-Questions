#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "\n enter the number of houses : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n enter the value of " << i + 1 << "th house : ";
        cin >> arr[i];
    }
    int max_amt = 0;
    if (n == 1)
        cout << "\n max amount possible is " << arr[0];
    if (n == 2)
        cout << "\n max amount possible is " << max(arr[0], arr[1]);

    int v1 = arr[0];
    int v2 = max(v1, arr[1]);
    for (int i = 2; i < n; i++)
    {
        max_amt = max(arr[i] + v1, v2);
        v1 = v2;
        v2 = max_amt;
    }
    cout << "\n maximum amount looted is ---->  " << max_amt;

    return 0;
}