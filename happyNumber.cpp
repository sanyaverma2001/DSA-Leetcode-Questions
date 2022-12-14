// Write an algorithm to determine if a number n is happy.

// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

// Example 1:

// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1

#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
    int sum;
    unordered_set<int> s{n};
    while (n != 1)
    {
        while (n)
        {
            sum += (n % 10) * (n % 10);
            n = n / 10;
        }
        if (s.count(sum))
            return true;
        s.insert(sum);
        n = sum;
    }
    return false;
}

int main()
{
    int n;

    cout << "Enter a Number to check for happy number : ";
    cin >> n;
    if (isHappy(n))
    {
        cout << "\n Entered number is a happy number !!!!!";
    }
    else
    {
        cout << "\n Not a happy number !!";
    }
    return 0;
}
