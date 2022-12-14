#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    int j=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            reverse(str.begin()+j, str.begin() + i);
            j=i+1;
        }
        else if(i==str.size()-1){
            reverse(str.begin()+j, str.begin() + i+1);
        }
    }
    cout << "\n " << str;
    return 0;
}