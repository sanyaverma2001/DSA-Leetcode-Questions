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

    sort(v.begin(), v.end());

    int st = 0;
    int end = n-1;
    int count = 0;

    int target;
    cout<<"\n enter target element :";
    cin >> target;
    while (st <= end)
    {
        
        // int mid = st + (end - st) / 2;
        // int mid = (st+ (end-st)/2);
        int mid = (st+end)/2;
        if (v[mid] == target)
        {
            count++;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    cout << "\n count of " << target << " is -->" << count;
    return 0;
}