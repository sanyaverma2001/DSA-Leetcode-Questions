#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, res;
    cout << "Enter a string : ";
    cin >> str;
    set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }
    for (auto i : s)
    {
        res += i;
    }
    sort(res.begin(),res.end());
    cout << "\n The resultant string is --> " << res;
    return 0;
}