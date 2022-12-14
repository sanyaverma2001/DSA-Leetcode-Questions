#include<bits/stdc++.h>
using namespace std;
    vector<string> divideString(string s, int k, char fill) {
        
        vector<string>ans;
        int cnt;
        // int i=0;
        int n=s.size();
        
        for(int i=0;i<n;i++ ){
            cnt=0;
            string str;
            while(cnt<k && i<n){
               str+=s[i++];
               
                cnt++;
            }
            if(str.size()!=k){
                int si=str.size();
                int x=k-si;
               while(x--){
                str+=fill;
               }
            }
            ans.push_back(str);
            --i;
        }
       for(auto i : ans){
           if(i.size()<k){
               while(i.size()!=k){
                  i+=fill;
               }
            // cout<<i<<endl;
           }
       }
        return ans;
        
    }

int main(){

    string s="abcdefghij";
    char fill='x';
    int k=3;
    vector<string>ans=divideString(s,k,fill);

    for(auto i : ans){
        cout<<i<<endl;
    }


    return 0;
}