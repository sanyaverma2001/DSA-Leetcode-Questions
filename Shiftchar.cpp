#include <bits/stdc++.h>
using namespace std;
char shift(char c, int x)
{
    while (x--)
    {
        c++;
    }
    return c;
}
int main()
{
    string s;
    cout << "enter a string : ";
    cin >> s;
    cout << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            char c = shift(s[i - 1], s[i] - '0');
            s[i] = c;
        }
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}