#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    v.push_back("hello");
    v.push_back("leetcode");
    for (auto i : v)
    {
        string str = i;
        int j=0;
        while(j<str.size()){
            cout<<str[j]<<endl;
            j++;
        }
    }

    return 0;
}