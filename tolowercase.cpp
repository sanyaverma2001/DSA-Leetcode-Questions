#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cout << "Enter a string :";
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {    // conversion from uper to  lower case
        if (str[i] >= 65 && str[i] < 98)
        {
            str[i] = str[i] + 32;
        }

        //  // conversion from lower to upercase case
        // if (str[i] >= 97 && str[i] < 123)
        // {
        //     str[i] = str[i] - 32;
        // }
    }
    cout << endl;
    cout << str;
    return 0;
}