#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world I am Sanya";
    string st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            st += "@40";
        }
        else
        {
            st += s[i];
        }
    }
    cout << s << endl;
    cout << st << endl;

    return 0;
}