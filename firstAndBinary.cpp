#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (auto i : v)
    {
        cout << i << " ";
    }

    int fidx = -1;
    int eidx = -1;
    int target;
    cout << "\n Enter the target element :";
    cin >> target;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            if (fidx == -1)
            {
                fidx = i;
                eidx = i;
            }
            else
            {
                eidx = i;
            }
        }
    }

    cout << "\n first occurance is  --> " << fidx << "  last occurance is -->" << eidx;

    return 0;
}