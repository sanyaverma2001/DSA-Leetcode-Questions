#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, s1;
    cout << "\n Enter a string : ";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '#')
        {
            while (str[i] != '@')
            {
                i++;
            }
        }
        else
        {
            s1 += str[i];
        }
    }
    cout << "\n s1--> " << s1;
    return 0;
}