#include<bits/stdc++.h>
using namespace std;
long long res;

void convert(string &s1,string &s2){
long long n1=0,n2=0;
int place=1;
for(int i=s1.size()-1;i>=0;i--){
    int rem=s1[i]-'0';
    n1=n1+rem*place;
    place=place*10;

}
place=1;
for(int i=s2.size()-1;i>=0;i--){
    int rem=s2[i]-'0';
    n2=n2+rem*place;
    place=place*10;

}
cout<<"\n"<<n1+n2;

}

int main(){
    string s1,s2;
    cout<<"enter the numbers :";
    cin>>s1>>s2;
    cout<<"\n "<<s1<<" "<<s2;
    convert(s1,s2);
    return 0;
}