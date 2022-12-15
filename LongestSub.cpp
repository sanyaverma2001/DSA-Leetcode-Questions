#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text1 = "abcde", text2 = "ace";
    int cnt = 0;
    for (int i = 0; i < text1.size(); i++)
    {
        if ((text2.find(text1[i]))  != string::npos)
        {
            cout << text1[i] << endl;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}