#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int count=0;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"\n Entered string is ---> "<<str;
    for(int i=0;i<=str.size();i++){
        if(str[i ]== ' '){
            count++;
        }
    }
    cout<<"\n Word count in string is ---> "<<count+1;
    return 0;
}