#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "leetcode";
    // map<char, int> mp;
    // for (auto i : s)
    // {
    //     mp[i]++;
    // }
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (mp[s[i]] == 1)
    //     {
    //         cout << s[i] << " ";
    //     }
    // }
    string s = "42352338";
    set<string> st;
    for (int i = 1; i < s.size() - 1; i++)
    {
        string t;
        if (s[i - 1] == s[i] && s[i + 1] == s[i])
        {

            t += s[i - 1];
            t += s[i + 1];
            t += s[i];
        }

        st.insert(t);
    }
    for (auto i : st)
    {
        cout << i << endl;
    }
    return 0;
}