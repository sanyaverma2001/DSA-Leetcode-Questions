#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> Anagrams(vector<string> &string_list)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < string_list.size(); i++)
    {
        string s = string_list[i];
        // cout << s << endl;
        sort(s.begin(), s.end());
        // cout << "\n After sorting --> " << s<<endl;
        mp[s].push_back(string_list[i]);
    }
    for (auto x : mp)
    {
        // cout << "\n mp-> first " << x.first;
        //  for(auto i : x.second){cout<<i<<endl;}
      
        ans.push_back(x.second);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return ans;
}
int main()
{
    vector<string> v;
    v.push_back("cat");
    v.push_back("act");
    v.push_back("god");
    v.push_back("dog");
    v.push_back("tac");
    Anagrams(v);
    return 0;
}