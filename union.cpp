#include<bits/stdc++.h>
using namespace std;
void uni(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
   
    while(i<n&&j<m)
    {
    if(arr1[i]<arr2[j])
    {
        cout<<arr1[i]<<" ";i++;
    }
    else if(arr2[j]<arr1[i])
    {
        cout<<arr2[j]<<" ";j++;
    }
    else
    cout<<arr2[j]<<" ";i++;j++;
    }
    while(i<n)
    {
        cout<<arr1[i];i++;
    }
    while(j<m)
    {
        cout<<arr2[j];j++;
    }
}
int main(){
    int n=5,m=4;
   
    int arr1[n]={1,2,3,4,5};
    int arr2[m]={6,7,8,9};
    uni(arr1,arr2,n,m);

}