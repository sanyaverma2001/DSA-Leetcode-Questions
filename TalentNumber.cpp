#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int sum = 0;
    cout << "Enter your date of birth : ";
    getline(cin,str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += str[i] - '0';
        }
    }
    cout << "\n Date of birth is --> " << str << " sum of digits in date of birth is --> " << sum;

    return 0;
}