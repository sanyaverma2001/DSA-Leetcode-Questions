#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v,ans;
    v.push_back({1, 3});
    v.push_back({2, 6});
    v.push_back({8, 10});
    v.push_back({15, 18});
    int st=v[0][0];
    int end=v[0][1];
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i][0] << " " << v[i][1] << endl;
        if(end>=v[i][0]){
            cout<<"initial---> "<<end<<endl;
            end=max(end,v[i][1]);
            cout<<"final ---> "<<end<<endl;
        }
        else{
            ans.push_back({st,end});
            st=v[i][0];
            end=v[i][1];
        }

    }
     ans.push_back({st,end});

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}