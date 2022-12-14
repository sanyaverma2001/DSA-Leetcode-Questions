#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums;
    int n;
    int mp[60] = {};
    int count = 0;
    cout << "enter the size of array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << endl;
        cout << "Enter the elements of array :";
        cin >> x;
        nums.push_back(x);
    }
    cout << endl;
    for (auto x : nums)
    {
        int t = x % 60;
        int y = (60 - t) % 60;
        // cout << "mp[y]"<<mp[y];
        // cout << endl;
        count += mp[y];

        mp[t]++;
        // cout << "mp[t]"<<mp[t];
        // cout << endl;
    }

    cout << endl;
    cout << "Number of pairs divisible by 60 is -->" << count;
    return 0;
}