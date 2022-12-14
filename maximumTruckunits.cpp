#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;
    v.push_back({5, 10});
    v.push_back({2, 5});
    v.push_back({4, 7});
    v.push_back({3, 9});
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i[0] << " " << i[1] << endl;
    }
}