#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "foobar";
    char l='o';
    map<char,int>mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }

// cout<<mp[l];
int x=mp[l];
int n= str.size();
int ans=(x/n)*100;
cout<<ans;
    return 0;
}