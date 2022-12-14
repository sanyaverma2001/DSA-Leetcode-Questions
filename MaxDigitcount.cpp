#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num,ans;
    cout << "Enter a number : ";
    cin >> num;
    map<int, int> mp;
    while (num != 0)
    {
        int x = num % 10;
        mp[x]++;
        num = num / 10;
    }
    int maxi=INT_MIN;
    for (auto i : mp)
    {
       
        if(i.second>maxi){
            maxi=i.second;
            ans=i.first;
        }

    }
    cout<<"\n Most occuring digit is ---> "<<ans;
    return 0;
}