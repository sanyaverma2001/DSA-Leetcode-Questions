#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;
    int ans;

    for(int i=0,j=1;j<str.size();i+=2,j+=2){
        if(str[j]=='A'){
           int x=str[i]-'0';
           int y=str[j+1]-'0';
           ans=(x&y); 
        }

        else if(str[j]=='B'){
           int x=str[i]-'0';
           int y=str[j+1]-'0';
           ans=(x|y); 
        }
        else{
             int x=str[i]-'0';
           int y=str[j+1]-'0';
           ans=(x^y); 
        }
    }

    cout<<ans;
    return 0;
}