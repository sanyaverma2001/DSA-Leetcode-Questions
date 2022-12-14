#include<bits/stdc++.h>
using namespace std;

int power(int n,int p){
    if(p==0) return 1;

    int ans=n*power(n,p-1);

    return ans;
}

int main(){
    int n,p;

    cout<<"Enter the number :";
    cin>>n;

    cout<<"\n Enter the power:";
    cin>>p;

    cout<<"\n answer is-----> "<<power(n,p);

    return 0;
}