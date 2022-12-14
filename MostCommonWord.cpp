#include <bits/stdc++.h>
using namespace std;
int main()
{
    string para = "Bob hit a ball, the hit BALL flew far after it was hit.";

    for(int i=0;i<para.size();i++){
        if(para[i]!=' '){
            para[i]=tolower(para[i]);
        }
    }
    cout << para << endl;
    return 0;
}