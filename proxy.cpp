#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(i==arr[j]) break;
           if(j==n-1 && i!=arr[j]){
            cout<<i<<" ";
           }
        }
    }
    return 0;
}