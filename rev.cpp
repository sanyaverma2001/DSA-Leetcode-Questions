#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    reverse(v.begin() + 2, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}