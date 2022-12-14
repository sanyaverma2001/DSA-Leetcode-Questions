#include <bits/stdc++.h>
using namespace std;

int calsum(int x, int y, int sum)
{
    if (x > y)
    {
        return 0;
    }

    sum += x + calsum(x + 1, y, sum);

    return sum;
}

int main()
{
    int x, y;
    cin >> x >> y;
   

    cout << calsum(x + 1, y - 1, 0);

    return 0;
}