#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 1; i <= 6; i++)
    {
        if (i % 2 != 0)
        {
            int j = 0;
            while (j < 6)
            {
                cout << i;
                j++;
            }
            cout << i + 1 << endl;


            
        }
        else
        {
            cout << i + 1;
            int j = 0;
            while (j < 6)
            {
                cout << i;
                j++;
            }
            cout << endl;
        }
    }
}