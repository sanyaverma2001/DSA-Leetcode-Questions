#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int pro = 1;
    int max_pro = INT_MIN;
    for (int i = 0; i < nums.size(); i++)

    {
        pro=1;
        for (int j = i + 1; j < nums.size(); j++)
        {
            pro = pro*nums[i];
            max_pro = max(max_pro, pro);
        }
    }

    cout << "Maximum product of subarray is ----> " << max_pro;
    return 0;
}