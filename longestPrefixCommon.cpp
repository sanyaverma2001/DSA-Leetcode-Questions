
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    int n;
    cout << "\n\t Enter the size of array :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\n\t Enter the element of array : ";
        string x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    string str = v[0];
    string ans = "";

    for (int i = 1; i < n; i++)
    {
        string str1 = v[i];
        int mn = min(str.length(), str1.length());
        for (int j = 0; j < mn; j++)
        {
            if (str[j] == str1[j])
            {
                ans += str[j];
            }
            else
                break;
        }

        str = ans;
        ans = "";
    }
    cout << "\n \t The longest common prefix is : " << str;
}