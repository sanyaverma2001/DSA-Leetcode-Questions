#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"peak elements are  ----->  ";

    for (int i = 0; i < 10; i++)
    {
        if (i == vec[i])
        {
            cout << vec[i] << " ";
        }
    }
    return 0;
}