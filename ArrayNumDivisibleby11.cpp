#include <bits/stdc++.h>

using namespace std;

int firstdigit(int n)
{
    while (n >= 10)
    {
        n = n / 10;
    }
    return n;
}
int lastdigit(int n)
{
    return n % 10;
}

int reverse(int n)
{
    int rem;
    int rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    int res = 0;
    int place = 1;

    cout << endl;
    for (int i = 0; i < n / 2; i++)
    {
        int a = firstdigit(v[i]);

        res += a * place;
        place = place * 10;
    }

    for (int i = n / 2; i < n; i++)
    {
        int a = lastdigit(v[i]);
        res += a * place;
        place = place * 10;
    }

    cout << endl;
    cout << res;

    cout << endl;
    cout << reverse(res);

    return 0;
}