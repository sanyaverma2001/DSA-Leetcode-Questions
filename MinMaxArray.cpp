#include<bits/stdc++.h>
using namespace std;
void display(vector<int>ans){
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>nums;
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"\n Enter the element of array : ";
        cin>>x;
        nums.push_back(x);
    }
    while(nums.size()>1){
        vector<int>ans(nums.size()/2);
        for(int i=0;i<ans.size()/2;i++){
             if(i%2==0){
                   ans[i]=min(nums[2*i],nums[2*i+1]);
                   cout<<ans[i]<<endl;
               }
               else{
                   ans[i]=max(nums[2*i],nums[2*i+1]);
                   cout<<ans[i]<<endl;
               }
        }
        nums=ans;
        display(ans);
    }
    return 0;
}