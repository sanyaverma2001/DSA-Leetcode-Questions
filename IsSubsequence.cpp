// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
// Example 1:
// Input: s = "abc", t = "ahbgdc"
// Output: true
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cout << "\n enter the string : ";
    cin >> t;
    cout << "\n enter the 2nd  string : ";
    cin >> s;

    int n1 = s.size();
    bool flag = false;
    int j = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[j])
            j++;
        if (j == n1)
        {
            cout << "\n"
                 << s << " is the subsequence of string  " << t << endl;
            flag = true;
        }
    }
    if (flag == false)
        cout << "\n"
             << s << " is not the subsequence of string  " << t << endl;
}