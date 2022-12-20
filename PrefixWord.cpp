#include <bits/stdc++.h>
using namespace std;

bool search1(string s, string temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        if (s[i] != temp[i])
            return 0;
    }
    return 1;
}
int main()
{
    string s, word;
    cout << "\n Enter the string : ";
    getline(cin, s);
    cout << "\n Enter the word : ";
    cin >> word;
    for (int i = 0; i < s.size(); i++)
    {
        string st;
        if (s[i] == ' ')
        {
            if (search1(st, word))
            {
                cout << i << endl;
            }
        }
        else
        {
            st += s[i];
        }
    }

    return 0;
}