#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "\n enter the size of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\n enter the " << i + 1 << "th element : ";
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum = 0, curr = 0;
    for (auto i : v)
    {
        cout << i << " ";
        sum += i;
    }
    for (int i = 0; i < n; i++)
    {
        if (curr == (sum - curr - v[i]))
            cout << "\n  the pivot index is ---> " << i;
        curr += v[i];
    }

    return 0;
}