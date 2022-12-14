#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << " Enter the size of array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    priority_queue<int, vector<int>, greater<int>> pq; // min heap

    for (auto i : v)
    {
        pq.push(i);
    }
    int k;
    cout << endl;
    cout << " Enter the negotiations number :";
    cin >> k;

    while (k--)
    {
        int x = pq.top();
        pq.pop();
        pq.push(x * -1);
    }
    int sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    cout << "\n The sum of array after k negotiations is :" << sum;
}