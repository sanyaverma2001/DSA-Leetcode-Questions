#include <bits/stdc++.h>
using namespace std;

void MinimumSteps(int ar1[], int ar2[], int n)
{
    bool flag = true;
    int count = 0;

    while (*min_element(ar1, ar1 + n) > -1)
    {
        int a = *min_element(ar1, ar1 + n);

        for (int i = 0; i < n; i++)
        {
            if (ar1[i] != a)
            {
                ar1[i] -= ar2[i];
                count++;
            }
        }
        set<int> s(ar1, ar1 + n);

        if (s.size() == 1)
        {
            flag = false;
            cout << count;
            break;
        }
    }

    if (flag)
    {
        cout << -1;
    }
}

int main()
{
    int n = 5;
    int ar1[] = {5, 7, 10, 5, 15};
    int ar2[] = {1, 2, 1, 5, 5};
    MinimumSteps(ar1,ar2,n);
    cout<<endl;
    cout<<ar1+1;
    return 0;
}