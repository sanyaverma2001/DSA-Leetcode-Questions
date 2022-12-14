#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, jd;
   
   
        cout << "Enter the size and jobs done : ";
        cin >> n >> jd;
        vector<int> v(n+1,1);
        vector<int> ans;
        // for (int i = 0; i <= n; i++)
        // {
        //     v.push_back(1);
        // }
        cout << "\n Enter the indices of jobs done:  ";
        for (int i = 0; i < jd; i++)
        {
            int x;
            cin >> x;
            v[x] = 0;
        }
        cout<<endl;
        for(int i : v){
            cout<<i<<" ";
        }
        for (int i = 1; i <= n; i++)
        {
            if (v[i] ==1 )
            {
                ans.push_back(i);
            }
        }
        cout << "\n\n Our final ans array is : \n";
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;

        int i = 0;

        while (i < ans.size())
        {
            cout << ans[i] << " ";
            i = i + 2;
        }
        int j = 1;
        cout<<endl;
        while (j < ans.size())
        {
            cout << ans[j] << " ";
            j = j + 2;
        }
    

    return 0;
}