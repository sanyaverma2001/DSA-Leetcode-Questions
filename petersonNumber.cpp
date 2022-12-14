#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        int ans = factorial(last);
        sum += ans;
        n = n / 10;
    }

    if (sum == temp)
    {
        cout << "\n Entered number is Peterson number";
    }
    else
    {
        cout << "\n Not a peterson number";
    }
}