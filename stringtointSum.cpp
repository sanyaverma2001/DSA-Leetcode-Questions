#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    
    cout<<"Enter a string : ";
    cin>>s;

    string numstr = "";
        int sum = 0, i;
        
        for(i = 0;s[i]; i++){
            numstr += to_string(s[i] - 96);
        }
        int k;
        cout<<"\n Enter the value of k : ";
        cin>>k;
        while(k--){
            sum = 0; i = 0;
            while(numstr[i]){
                sum += int(numstr[i] - 48);
                i++;
            }
            numstr = to_string(sum);
        }
       cout<<"\n ans is ----> "<<sum;
    return 0;
}