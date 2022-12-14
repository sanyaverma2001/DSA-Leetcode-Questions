#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "123";
    int num = 0;
    int place = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        num = num + place * (s[i] - 48);
        place = place * 10;
    }
    cout << num;
    return 0;
}