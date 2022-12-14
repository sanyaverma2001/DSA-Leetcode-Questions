// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
// ex c=5
// 1*1+2*2=5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check for whether number can be expressed as a^2 + b^2 :";
    cin >> num;
    int left = 0;
    bool flag = false;
    int right = sqrt(num);
    while (left <= right)
    {
        int temp = (left * left) + (right * right);
        if (temp == num)
        {
            cout << "\n num can be expressed !!! ";
            flag = true;
            break;
        }
        else if (temp > num)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    if (flag == false)
    {
        cout << "\n number can't be expressed as sum of two numbers !!";
    }
    return 0;
}