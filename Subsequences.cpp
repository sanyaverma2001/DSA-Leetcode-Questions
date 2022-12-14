// abc
// a,b,c,ab,bc,ac,abc,""
#include <bits/stdc++.h>
using namespace std;

void subSeq(vector<string> &v, string str, string s1, int i)
{
    if (i >= str.size()){

        v.push_back(s1);
    return;
    }
    // exclude
    subSeq(v, str, s1, i + 1);
    // include
    char c = str[i];
    s1.push_back(c);
    subSeq(v, str, s1, i + 1);
}
int main()
{
    string str = "abc";
    vector<string> v;
    string s1 = "";
    subSeq(v, str, s1, 0);
    sort(v.begin(),v.end());
    for (auto i : v)
    {
        cout <<"{ "<< i << " }"<<endl;;
    }
    return 0;
}