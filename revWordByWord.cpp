#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    getline(cin,str);

  for(int i=0;i<str.size();i++){
      if(str[i]==' '){
          reverse(str.begin(),str.end());
      }
  }
  cout<<str;
    return 0;
}