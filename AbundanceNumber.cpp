#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number :";
    cin >> n;
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        cout << "\n Entered number " << n << " is abundance number";
    }
    else
    {
        cout << " \n Entered number " << n << " is not a abundance number";
    }
    return 0;
}