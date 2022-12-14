#include<bits/stdc++.h>
using namespace std;

int main(){

    string a,b,result="";
   cout<<" Enter the two binary numbers:";

   cin>>a>>b;

   int i=a.length()-1;
   int j=b.length()-1;

   int carry=0;

   while(i>=0 || j>=0){
       int sum=carry;

       if(i>=0) sum+=a[i--]-'0';
       if(j>=0) sum+=b[j--]-'0';

       if(sum>1){
           carry=1;
       }
       else{
           carry=0;
       }

       result+=to_string(sum%2);

   }
   if(carry) result+=to_string(carry);
   reverse(result.begin(),result.end());

   cout<<"\n\n\t The sum of strings "<< a <<"  and "<<b<<"  is ="<<result;
    return 0;
}