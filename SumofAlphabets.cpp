#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    int sum = 0;
    cout << "Enter a string : ";
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        sum += int(str[i]);
    }
    cout << "\n The sum of string is --> " << sum;
}