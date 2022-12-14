#include <bits/stdc++.h>
using namespace std;
int search(int val, vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (val == v[i])
            return i;
    }
    return -1;
}
void print(vector<int> v)
{
    cout << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> v;
    int n, sum = 0;

    cout << "\n enter the size of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\n enter the " << i + 1 << " element of array  : ";
        int x;
        cin >> x;
        v.push_back(x);
    }
    print(v);
    cout << endl;

    while (v.size()> 1)
    {
        int mi = *min_element(v.begin(), v.end());
        // cout << "\n min is --> " << mi;
        sum = sum + mi;
        // if (v.size() == 1)
        // {
        //     sum += v[0];
        //     break;
        // }
        //  cout << "\n sum is --> " << sum;
        int idx = search(mi, v);
        // cout << "\n idx ---> " << idx;

        v.erase(v.begin() + idx + 1);
        // print(v);

        v.erase(v.begin() + idx - 1);
        // print(v);
        idx = search(mi, v);
        v.erase(v.begin() + idx);

        // print(v);
    }
    cout << "\n sum is --> " << sum+v[0];
    return 0;
}