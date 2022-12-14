#include<bits/stdc++.h>
using namespace std;
//  s = "abcde", goal = "cdeab"

int main(){
    string str,goal;

    str="abcde";
    goal="cdeab";

    for(int i=0;i<str.size();i++){
        str.push_back(str[0]);
        cout<<str<<" ";
        str.erase(str.begin());
        cout<<str<<" ";

        if(str==goal){break;}
    }
   

    
}