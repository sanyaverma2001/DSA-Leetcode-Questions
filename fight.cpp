#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, sum = 0;
    cout << "\n Enter the value of n :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n enter the value of array ele: ";
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int j = n - 1;

    int power;
    cout << "\n enter the val of power as 1 if power exits or enter 0 if power ends : ";
    cin >> power;
    while (power)
    {
        sum += arr[j--];
        int power;
        cout << "\n enter the val of power as 1 if power exits or enter 0 if power ends : ";
        cin >> power;
        if (power == 0)
        {
            break;
        }
    }
    cout << "\n total amount he won is ---> ₹" << sum << endl;
    return 0;
}