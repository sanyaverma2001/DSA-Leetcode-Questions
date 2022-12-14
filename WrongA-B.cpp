// Print  wrong answer of A-B. Your answer must be a positive integer containing the same number of digits as the correct answer, and exactly one digit must differ from the correct answer. Leading zeros are not allowed. If there are multiple answers satisfying the above conditions, anyone will do.

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, y;

    cout << "Enter the value of a and b : ";
    cin >> a >> b;

    c = a - b;
    cout << "\n Real diffrence is --> " << c;
    y = c % 10;
    y = (y + 1) % 10;
    c=c/10;
    if (y == 0)
    {
        y++;
    }
    c = c * 10 + y;
    cout << endl
         << "Wrong diffrence is ---> " << c;

    return 0;
}
