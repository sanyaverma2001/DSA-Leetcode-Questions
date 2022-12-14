#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j = 1, k, l, p;
    cout << "\n\t enter the number of rows : ";
    cin >> n;
    // cout << 1 << endl;
    for (int i = 1; i <= n; i++)
    {
        k = i;
        if (k % 2 == 0)
        {

            p = j;

            while (k--)
            {

                j++;
            }
            l = j - 1;

            while (l >= p)
            {
                cout << l << " " ;
               
                l--;
            }
        }
        else
        {

            while (k--)
            {
                
                cout << j << " ";
                
                j++;
            }
        }

        cout << endl;
    }
    return 0;
}