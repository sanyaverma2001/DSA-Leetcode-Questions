#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    getline(cin, str);

    cout << "Entered string is : " << str;
    map<char, int> mp;

    for (auto i : str)
    {
        mp[i]++;
    }
    cout << "\n Duplicate charters in string are  as follow :\n ";
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            cout << i.first << " ";
        }
    }
    return 0;
}