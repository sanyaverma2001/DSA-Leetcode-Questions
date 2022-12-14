#include<bits/stdc++.h>
using namespace std;

int main(){
	 int n;
	 cin>>n;

	 vector<int>v;

	 for(int i=0;i<n;i++){
		 int x;
		 cin>>x;
		 v.push_back(x);
	 }

     cout<<"\n Array formed is \n ";
     for(int i : v){
         cout<<i<<" ";
     }
	 
	 map<int,int>mp;
	 for(auto i : v){
		 mp[i]++;
	 }
     cout<<endl;

     for(auto i : mp){
         cout<<i.first<<" "<<i.second;
         cout<<endl;
     }

     int q;
	 cin>>q;
	 int l,r;

    


	 for(int i=0;i<q;i++){
         cin>>l>>r;
		 int sum=0;
		 for(auto j : mp){
			 if(j.second>=l && j.second<=r){
				 sum+=j.first*j.second;
                 
			 }
		 }
		 cout<<endl<<sum<<endl;
	 }

	return 0;
}