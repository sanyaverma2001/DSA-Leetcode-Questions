#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1){return 1;}

    return n*fact(n-1);
}

int main(){
    int n;
    int r;
    cout<<"Number of insans-->";
    cin>>n;

    cout<<"Number of seats-->";
    cin>>r;
    int ans=fact(n);
    int ans1=fact(n-r);

    int result=ans/ans1;

    cout<<"\n The number of possible ways are ---->"<<result;

}