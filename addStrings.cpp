#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "123";
    int place = 1;
    int rev = 0;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        int rem = str[i] - '0';
        cout << rem << " ";
        rev += rem * place;
        place = place * 10;
    }
    cout << endl;
    cout << rev;
    return 0;
}