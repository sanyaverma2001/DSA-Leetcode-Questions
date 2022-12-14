#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "xyzzaz";
    vector<string> v;
    for (int i = 0; i < str.size(); i++)
    {
        int cnt = 0, j = i;
        string s;
        while (cnt < 3 && j!=str.size())
        {
            s += str[j];
            j++;
            cnt++;
        }
        if(s.size()==3)  v.push_back(s);
       
    }
    for(auto i : v){
        set<char>s;
        for(int j=0;j<i.size();j++){
            s.insert(i[j]);
        }
        if(s.size()==3) cout<<i<<endl;
    }
    return 0;
}