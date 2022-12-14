// ans=a^b1/2*a^b1/2 (if b is even)
// ans=a*a^b1/2*a^b1/2 (if b is odd)

#include <bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int ans = power(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}