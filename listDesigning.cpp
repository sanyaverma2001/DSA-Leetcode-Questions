#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    for (int i = 0; i <= 10; i++)
    {
        v.push_back(i);
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout<<endl<<v.front();

    return 0;
}