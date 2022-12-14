#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter  a number :";
    cin >> n;

    int temp = n;
    int rem;
    int rev = 0;

    while (temp != 0)
    {
        rem = temp % 10;

        if (rev > INT32_MAX || rev < INT32_MIN)
        {
            
            break;
        }
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    cout << endl
         << rev;
}