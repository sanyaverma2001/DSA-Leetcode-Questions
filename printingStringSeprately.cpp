#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "\n Enter a string :";
    cin >> str;
    string digi, alphabets, symbols;

    for (auto i : str)
    {
        if (isdigit(i))
        {
            digi += i;
        }
        else if (int(i) >= 65 && int(i) < 123)
        {
            alphabets += i;
        }
        else
        {
            symbols += i;
        }
    }

    cout << "\n Original string is :" << str << endl;
    cout << digi << endl;
    cout << alphabets << endl;
    cout << symbols;
}