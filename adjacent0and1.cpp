#include<bits/stdc++.h>
using namespace std;

int main(){
    int si=5;
    int arr[si]={1,0,0,0,1};
    int n=1;
    int count=0,ans=0;

    for(auto i : arr){
        if(i==1){
            count++;
        }
    }

    cout<<count<<endl;

    ans=(si+1)/2;

    cout<<ans<<endl;

    int x=count+n;

    cout<<x;

    return 0;
}