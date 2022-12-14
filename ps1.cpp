#include<bits/stdc++.h>
using namespace std;
int makeNum(vector<int>arr,int n){
 int rev=0,place=1;
    int i=n-1;
    while(i>=0){
        rev+=arr[i]*place;
        place=place*10;
        i--;
    }
    return rev;
}

int main(){
    vector<int>arr,arr1;
    int n,m;
    cout<<"Enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
    }
    cout<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
   
   int a1=makeNum(arr,n);
   cout<<endl;
   cout<<a1;

    cout<<"\nEnter the size of array :";
    cin>>m;
    for(int i=0;i<m;i++){
       int x;
       cin>>x;
       arr1.push_back(x);
    }
    cout<<endl;
    for(int i : arr1){
        cout<<i<<" ";
    }
    int a2=makeNum(arr1,m);
     cout<<endl;
   cout<<a2;

   int sum=a1+a2;
   cout<<"\n the sum is --> "<<sum;

   vector<int>res;

   while(sum!=0){
       res.push_back(sum%10);
       sum=sum/10;
   }
   cout<<endl;
   reverse(res.begin(),res.end());

   for(int i=0;i<res.size();i++){
       cout<<res[i]<<" ";
   }


    return 0;
}