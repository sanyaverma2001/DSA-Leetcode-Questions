#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,res="";
    getline(cin,str);
    for(int i=0;i<=str.size();i++){
        if(str[i]==' '){
           res+=" ";
        }
        else{
            res+=str[i];
        }
    }
    cout<<endl;
    cout<<res;
    
    return 0;
}