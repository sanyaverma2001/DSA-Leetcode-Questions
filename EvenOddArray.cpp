#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums,odd,even;
    int n;
    cout << "Enter the size of arry :";
    cin >> n;
    cout << "\n Enter the elements of array :";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout<<" Array is [  ";
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<"]";
    cout<<endl;

    for(int i=0;i<n;i++){
        if(i%2!=0){
            odd.push_back(nums[i]);
        }
        else{
            even.push_back(nums[i]);
        }
    }

    // odd in desending order 

    sort(odd.begin(),odd.end(),greater<int>());

    // even in desending order 

    sort(even.begin(),even.end());

    int e=0,o=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            nums[i]=(odd[o++]);
        }
        else{
            nums[i]=(even[e++]);
        }
    }

cout<<endl;
  cout<<" Modified Array is [  ";
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<"]";


    return 0;
}