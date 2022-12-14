#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}
bool ispalindrome(int n)
{
    int x = rev(n);
    return x == n;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    while (num != 0)
    {
        int sum = num + rev(num);

        if (ispalindrome(sum))
        {
            cout << sum << endl;
            break;
        }
        num = sum;
    }

    return 0;
}