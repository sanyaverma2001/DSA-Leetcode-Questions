// You are given an array of strings words and a string chars.

// A string is good if it can be formed by characters from chars (each character can only be used once).

// Return the sum of lengths of all good strings in words.

 

// Example 1:

// Input: words = ["cat","bt","hat","tree"], chars = "atach"
// Output: 6
// Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<string>v;
    int n;
    cout<<"Enter the number of words you want to push : ";
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cout<<"\n Enter the  "<<i+1<<" th word : ";
        cin>>str;
        v.push_back(str);
    }
    string chars;
    cout<<"\n enter the value of chars string : ";
    cin>>chars;
    unordered_map<char,int>mp;
    for(auto i : chars){
        mp[i]++;
    }
    int sum=0,cnt;
    for(int i=0;i<v.size();i++){
        cnt=0;
        unordered_map<char,int>dp(mp);
        for(auto i : v[i]){
            dp[i]--;
            if(dp[i]<0) break;
            cnt++;
        }
        if(cnt==v[i].size()){ sum+=cnt;
        cout<<"\n Word  is  -----> "<<v[i];
        }
    }
    return 0;
}