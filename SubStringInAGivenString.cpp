#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, sub_str;
    cout << "Enter the Original string :";
    cin >> str;

    cout << endl;

    cout << "Enter the Substring :";
    cin >> sub_str;
    cout << endl;

    

    if (strstr(str.c_str(), sub_str.c_str()))
    {
        cout << sub_str << " found";
    }
    else
    {
        cout << sub_str << "  not found ";
    }

    return 0;
}