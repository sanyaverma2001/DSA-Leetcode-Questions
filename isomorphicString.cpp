#include <bits/stdc++.h>
using namespace std;
// s1="add" s2= "egg" hence s1 and s2 are isomorphic strings
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    unordered_map<char, char> mp1, mp2;

    for (int i = 0; i < s1.size(); i++)
    {
        mp1[s1[i]] = s2[i];
    }
    for (int i = 0; i < s2.size(); i++)
    {
        mp2[s2[i]] = s1[i];
    }
    string ans1 = "";
    string ans2 = "";

    for (int i = 0; i < s1.size(); i++)
    {
        ans1 += mp1[s1[i]];
    }
    for (int i = 0; i < s2.size(); i++)
    {
        ans2 += mp2[s2[i]];
    }

    if (ans1 == s2 && ans2 == s1)
    {
        cout << "\n Entered string are isomorphic !!!!";
    }
    else
    {
        cout << "\n not isomorphic ";
    }
    return 0;
}