#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n Entered array is : \n ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int l=0,r=0;
    while(r<n){
        if(arr[r]==0) r++;
        else{
            swap(arr[l++],arr[r++]);
        }
    }
    cout<<"\n transformed array is : \n ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}