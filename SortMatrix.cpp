#include <bits/stdc++.h>
using namespace std;
int ele = 5;

void relativesort(vector<int>&nums, vector<int> &arr,int &k)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > ele)
        {
            swap(arr[i],nums[i]);
            k++;
        }
    }
   
}

void fun(vector<vector<int>> &v)
{
    int c = v.size() - 1;
    int k=0;
    // int r = v.size() - 1;
    for (int i = 0; i < v.size(); i++)
    {
        relativesort(v[i],v[c],k);
        if(k==c){c--;}
    }
}
int main()
{
    vector<vector<int>> v = {{9, 8, 7}, {6, 5, 4}, {3, 2, 10}};
    fun(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}