#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter the two strings:" << endl;

    cin >> s1;
    cin >> s2;

    cout << endl;

    int digi1 = 0, digi2 = 0, ch1 = 0, ch2 = 0, sp1 = 0, sp2 = 0;

    for (auto i : s1)
    {
        if (i >= 48 && i < 58)
        {
            digi1++;
        }
        else if (i >= 65 && i < 123)
        {
            ch1++;
        }
        else
        {
            sp1++;
        }
    }

        for (auto i : s2)
        {
            if (isdigit(i))
            {
                digi2++;
            }
            else if (i >= 65 && i < 123)
            {
                ch2++;
            }
            else
            {
                sp2++;
            }
        }

        if (digi1 == digi2 && ch1 == ch2 && sp1 == sp2)
        {
            cout << " \n\t\t two strings matched!!!!";
        }
        else
        {
            cout << "\n\t NO !!!!!!!! Two strings did'nt match";
        }

        return 0;
    }