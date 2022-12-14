#include <bits/stdc++.h>
using namespace std;
int arr[10] = {8, 9, 4, 0, 2, 1, 3, 5, 7, 6};
vector<int> v = {991, 338, 38};

int fun(int x)
{
    string s;
    while (x != 0)
    {
        int r = x % 10;
        s += (arr[r]+ '0');
        x = x / 10;
    }
    reverse(s.begin(), s.end());
    int a = stoi(s);
    return a;
}

int main()
{
    for (auto i : v)
    {
        int ans = fun(i);
        cout << ans << endl;
    }
    return 0;
}