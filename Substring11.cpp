#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    int i=0;

    while (i < s.size())
    {
        size_t found = s.find(part);
        s.erase(found, found + part.size()-1);
        cout << s << endl;
        i++;
    }
    return 0;
}