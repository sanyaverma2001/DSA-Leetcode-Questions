#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;
    // cout << str;
    int sum = 0;
    for (auto i : str)
    {
        if (isdigit(i))
        {
            int a = i - '0';
            sum += a;
        }
    }

    cout << " The sum of digits present in string is " << sum;

    return 0;
}