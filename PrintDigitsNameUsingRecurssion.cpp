#include <bits/stdc++.h>
using namespace std;
void display(int n, map<int, string> mp)
{
    if (n == 0)
        return;
    int temp = n % 10;
    n = n / 10;
    display(n, mp);
    cout << mp[temp] << endl;
}
int main()
{
    int n;
    cin >> n;
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    mp[3] = "Three";
    mp[4] = "Four";
    mp[5] = "Five";
    display(n,mp);
    return 0;
}