#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr;
    int n;
    cout<<"\n Enter the value : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0) {
            arr.push_back(i);
        }
    }
    cout<<endl;
    int i=0,j=arr.size()-1;
    while(i<=j){
        if(arr[i]*arr[j]==n){
            cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
            i++;
            j--;
        }
        else if(arr[i]*arr[j]>n){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}