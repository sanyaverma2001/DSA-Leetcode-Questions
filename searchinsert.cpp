// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<bits/stdc++.h>
using namespace std;
int position(vector<int>v,int target){
     sort(v.begin(),v.end());
     if(v[0]>target) return 0;
     if(v[v.size()-1]<target) return v.size();
     int i=0,mid;
     int j=v.size()-1;
     while(i<=j){
         mid=(i+j)/2;
        if(v[mid]==target){return mid;}
        else if (v[mid]>target){
            j=mid-1;
        }
        else {
            i=mid+1;
        }

     }
     if(v[mid]<target){return mid+1;}
     return mid;

}
int main(){
    vector<int>v;
    int n,target;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"\nEnter the elements of array : \n ";
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
    }
    cout<<"\n Enter the element you want to search : ";
    cin>>target;
    cout<<" \n element found or expected position is : "<<position(v,target);
    

    return 0;
}