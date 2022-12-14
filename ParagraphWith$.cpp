#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str,ans;
    getline(cin, str);

    cout << str;

    int cnt = 0, d1, d2;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '$' && cnt == 0)
        {
            d1 = i;
            cnt = 1;
        }
        else if (str[i] == '$' && cnt == 1)
        {
            d2 = i;
            break;
        }
    }
    cout<<"\n modified string is :";
    cout << endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (i >= d1 && i <= d2)
        {
            continue;
        }
        cout << str[i];
    }

    return 0;
}