#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {4, 2, -3, 1, 6};
    unordered_map<int, int> mp;

    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        cout<<"sum is --> "<<sum<<endl;

        if (mp.count(sum) != 0)
        {
           cout<<"True"<<endl;
        }
      
        mp[sum]++;
          cout <<"map "<< mp[sum] << endl;
    }
    return 0;
}