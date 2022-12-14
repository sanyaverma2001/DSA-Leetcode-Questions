#include <bits/stdc++.h>
using namespace std;
bool isFloat(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
            return true;
    }
    return false;
}
int countdigits(string str)
{
    int cnt = 0, flag = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            flag = 1;
        }
        if (flag)
        {
            cnt++;
        }
    }
    return cnt - 1;
}
int convertString(string str)
{
    int ans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] > '0' && str[i] <= '9')
        {
            ans = (str[i] - 48) + 10 * ans;
        }
    }
    return ans;
}

int main()
{
    string str;
    cout << "Enter the number : ";
    cin >> str;
    if (isFloat(str))
    {
        float num = convertString(str) / pow(10, countdigits(str));
        cout << "\n converted number is --> " << num;
    }
   else{
     cout << "\n converted number is --> " << convertString(str);
   }
    

    return 0;
}