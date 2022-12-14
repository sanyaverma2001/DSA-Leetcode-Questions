#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;

    int sum = 0, temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    int floor;
    floor = sum / n;
    if (floor <= k)
    {
        cout << 0 << endl;
    }
    else
    {
        long long r = 1e18, extra, l = n, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            cout<<"mid is --> "<<mid<<endl;

            floor = sum / mid;

            if (floor <= k)
            {
                cout <<"floor is --> "<< floor << endl;
                extra = mid;
                r = mid - 1;
                cout <<"r is --> "<< r << endl;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
}