#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    bool temp = true;
    for (int i = 2; i < n; i++)
    {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 2; j <v[i]; j++)
        {
            if (v[i] % j == 0)
            {
                temp = false;
                break;
                
            }
        }
        if (temp)
        {
            cout << v[i] << " ";
        }
        temp=true;
    }
    return 0;
}