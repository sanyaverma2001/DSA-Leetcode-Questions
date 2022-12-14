// Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

// Example 1:

// Input: num = "1432219", k = 3
// Output: "1219"
// Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.

#include<bits/stdc++.h>
using namespace std;

string RemoveKDigits(string str,int k){
    int n=str.size();
    if(n<=k) return "0";
    if(k==0) return str;

    stack<char>st;
    string res="";

    st.push(str[0]);

    for(int i=1;i<n;i++){
        while(k>0 && !st.empty() && str[i]<st.top()){
            --k;
            st.pop();
        }
        st.push(str[i]);

        if(st.size()==1 && str[i]=='0'){
            st.pop();
        }
    }

    while(k && !st.empty()){
        --k;
        st.pop();
    }

    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }

    reverse(res.begin(),res.end());
    if(res.size()==0) return "0";

    return res;
}

int main(){
    string num;
    int k;

    cout<<"Enter a number : ";
    cin>>num;

    int n= num.size();
    cout<<"\n Enter the value of K : ";
    cin>>k;

    cout<<"\n smallest number formed after removing k digits is --> "<<RemoveKDigits(num,k);

    return 0;
}