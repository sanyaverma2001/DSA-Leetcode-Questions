#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"\n Enter a string : ";
    getline(cin,str);
    map<char,int>mp;
    for(auto i : str){
        mp[i]++;
    }
    char lf,hf;
    int maxi=INT_MIN;
    int mini = INT_MAX;
    for(auto i : mp){
        if(i.second>maxi){
            maxi=i.second;
            hf=i.first;
        }
         if(i.second<=mini){
            mini=i.second;
            lf=i.first;
        }
    }

cout<<"\n hf ----> "<<hf<<"  lf --->  "<<lf;
    return 0;
}