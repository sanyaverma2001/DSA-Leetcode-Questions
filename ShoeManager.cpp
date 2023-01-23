#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b,c;
    cin>>a>>b>>c;
    long long int count =0;
    vector<long long int>v1,v2,v3;
    for(int i=1;i<=a;i++){
        v1.push_back(i);
    }
    for(int i=1;i<=b;i++){
        v2.push_back(i);
    }
    for(int i=1;i<=c;i++){
        v3.push_back(i);
    }

    vector<long long int>ans;
    int i = 0, j = 0, k = 0;

	
	while (i < v1.size() && j < v2.size() && k < v3.size()) {
		
		if (v1[i] == v2[j] && v2[j] == v3[k]) {
			ans.push_back(v1[i]);
			i++;
			j++;
			k++;
		}

		
		else if (v1[i] < v2[j])
			i++;

		
		else if (v2[j] < v3[k])
			j++;

		
		else
			k++;
	}

   vector<long long int>tp,vec;
   vec=ans;
   next_permutation(vec.begin(),vec.end());
   tp=vec;
   while(tp!=ans){
    count++;
    next_permutation(tp.begin(),tp.end());
   }
   count++;
   return count;



    return 0;
}