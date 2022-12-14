#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        int flag = 0;
        cout << "Enter a string : ";
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'a' && str[i + 3] == 'b')
            {
                cout << "\nentered string " << str << " is valid!!";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "\nentered string " << str << " is not valid!!";
        }
        cin.ignore();
        cout << endl;
    }

    return 0;
}