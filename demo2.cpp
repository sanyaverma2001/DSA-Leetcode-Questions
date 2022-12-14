#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int temp = v[n - 1] * v[n - 2];
    int sum = v[n - 1] + v[n - 2];
    cout << sum << endl;
    return 0;
}