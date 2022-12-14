// program designed using queue ds
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cout << "\t Enter two string : ";
    cin >> s1 >> s2;
    queue<char> q1, q2;
    for (auto i : s1)
    {
        q1.push(i);
    }
    for (auto i : s2)
    {
        q2.push(i);
    }

    int n = s2.size();
    bool flag = false;
    while (n--)
    {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if (q1 == q2)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "\n\t yes s2 is rotated string of s1!!";
    }
    else
    {
        cout << "\n\t No s2 is not a rotated string of s1!!";
    }

    return 0;
}