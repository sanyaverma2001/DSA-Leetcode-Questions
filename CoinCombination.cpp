#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amt;
    cout << "\n Enter the amount between 1-20 : ";
    cin >> amt;

    for (int a = 0; a <= amt; a++)
    {
        for (int b = 0; b <= amt / 2; b++)
        {
            for (int c = 0; c <= amt / 5; c++)
            {
                for (int d = 0; d <= amt / 10; d++)
                {
                    if (1 * a + 2 * b + 5 * c + 10 * d == amt)
                    {
                        cout << " Rs 1 = " << a << " "
                             << " Rs 2 = " << b << " "
                             << " Rs 5 = " << c << " "
                             << " Rs 10 = " << d << endl;
                    }
                }
            }
        }
    }
    return 0;
}