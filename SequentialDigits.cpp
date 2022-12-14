// An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

// Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

// Example 1:

// Input: low = 100, high = 300
// Output: [123,234]
// Example 2:

// Input: low = 1000, high = 13000
// Output: [1234,2345,3456,4567,5678,6789,12345]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int low, high;
    cout << "Enter the value of low and high :";
    cin >> low >> high;
    int num;
    cout << "\n The sequential numbers in the range are --\n";
    for (int i = 1; i < 10; i++)
    {
        num = i;
        for (int j = i + 1; j < 10; j++)
        {
            num = num * 10 + j;
            if (num >= low && num <= high)
            {
                cout << num << " ";
            }
        }
    }
    return 0;
}