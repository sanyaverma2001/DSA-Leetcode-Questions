#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "\n enter a string : ";
    cin >> s;
    cout << "\n " << s;

    while (next_permutation(s.begin(), s.end()))
    {
        cout << "\n " << s;
    }

    return 0;
}