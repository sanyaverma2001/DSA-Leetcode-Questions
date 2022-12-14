#include<bits/stdc++.h>
using namespace std;



bool isPrime(int n ){
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}

void CalculateFactors(int n,vector<int>&arr){
    for(int i=2;i<n;i++){
        if(n%i==0)
        {
            cout<<n<<" factor is --- > : "<<i<<endl;
            
            arr.push_back(i);
    }
    
}
}
void check(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
       if(isPrime(arr[i])==false){
        CalculateFactors(arr[i],arr);
       } 
    }
    
}

int main(){
    int n;
    vector<int>arr;
    cout<<"\n\t Enter a number : ";
    cin>>n;
    CalculateFactors(n,arr);
    check(arr);




    return 0;
}