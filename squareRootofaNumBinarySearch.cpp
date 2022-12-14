#include <bits/stdc++.h>
using namespace std;

float squareRoot(int n)
{
    int strt = 0;
    int end = n;
    int mid;
    float ans;
    while (strt <= end)
    {
        mid = (strt + end) / 2;

        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        if (mid * mid < n)
        {
            ans = strt;
            strt = mid + 1;
        }
        end = mid - 1;
    }

    float it = 0.1;
    for (int i = 0; i < 5; i++)
    {
        while (ans * ans <= n)
        {
            ans += it;
        }

        ans = ans - it;
        it = it / 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    cout << endl
         << " square of " << n << " is " << squareRoot(n);

    return 0;
}