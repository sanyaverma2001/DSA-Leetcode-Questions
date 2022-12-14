// A company is planning to interview 2n people. Given the array costs where costs[i] = [aCosti, bCosti], the cost of flying the ith person to city a is aCosti, and the cost of flying the ith person to city b is bCosti.

// Return the minimum cost to fly every person to a city such that exactly n people arrive in each city.

// Example 1:

// Input: costs = [[10,20],[30,200],[400,50],[30,20]]
// Output: 110
// Explanation:
// The first person goes to city A for a cost of 10.
// The second person goes to city A for a cost of 30.
// The third person goes to city B for a cost of 50.
// The fourth person goes to city B for a cost of 20.

// The total minimum cost is 10 + 30 + 50 + 20 = 110 to have half the people interviewing in each city.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{10, 20}, {30, 200}, {400, 50}, {30, 20}};
    int n = v.size() / 2;
    int res = 0;
    vector<int> v1;
    for (int i = 0; i < v.size(); i++)
    {
        res += v[i][0];
        v1.push_back(v[i][0] - v[i][1]);
    }
    sort(v1.begin(), v1.end());
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < n; i++)
    {
        res -= v1[i];
    }
    cout << res << endl;
    return 0;
}