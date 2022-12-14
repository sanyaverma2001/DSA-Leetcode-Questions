#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    v.push_back("eat");
    v.push_back("bat");
    v.push_back("cat");
    v.push_back("eat");
    map<string, int> mp;
    for (auto i : v)
    {
        mp[i] = 0;
    }
    for (auto i : mp)
    {
        cout << i.first << "----> " << i.second << endl;
    }
}