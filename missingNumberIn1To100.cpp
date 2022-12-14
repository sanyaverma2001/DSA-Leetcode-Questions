#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    int n = 100;

    for (int i = 1; i < 99; i++)
    {
        v.push_back(i);
    }

    v.push_back(100);
    int total_sum = n * (n + 1) / 2;
    int sum = 0;

    for (auto i : v)
    {
        sum += i;
    }

    cout << "Missing number is :" << total_sum - sum;
}