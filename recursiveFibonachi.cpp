#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int index;
    cout << "Enter the index number :";
    cin >> index;
    int ans = fib(index);
    cout << "\n The number at " << index << " is --> " << ans;

    return 0;
}