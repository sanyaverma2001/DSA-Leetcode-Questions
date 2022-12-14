#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    int arr[8]={1, 3, 5 ,7 ,8 ,2, 5 ,7};
    for(int i=0;i<8;i++){
        for(int j=i;j<8;j++){
            if((arr[i]==arr[j]+1 ) || (arr[j]==arr[i]+1)){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                count++;
            }
        }
    }
    cout<<count;
}