#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "\nenter the size of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            cout << "\n " << i.first << "  is repeated " << i.second << " times";
        }
    }
    return 0;
}