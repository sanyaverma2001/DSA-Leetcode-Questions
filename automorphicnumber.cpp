#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter a number to check for automorphic:";
    cin >> n;
    long long int square = n * n;
    cout << " The square of " << n << " is " << square;
    cout << endl;
    int last_digit = square % 10;
    if (last_digit == n)
    {
        cout << " Number is automorphic!!!!!!!!!!!!!";
    }
    else
    {
        cout << " No !!!!!!!!!!!!!!!!!! it is not an automorphic number";
    }
    return 0;
}