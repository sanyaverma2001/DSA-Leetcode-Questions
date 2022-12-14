#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, s;
    cout << "Enter the main string : ";
    cin >> str;
    cout << "\n Enter the substring :";
    cin >> s;
    
    int idx = 0, rev = 0, place = 1;
    while ((idx = str.find(s, idx)) != std::string::npos)
    {

        int temp = idx + 1;
        cout << "\n occurences are : " << idx;
        rev = rev + temp * place;
        place = place * 10;
        idx += s.length();
    }
    cout << "\n Unique number formed is --> " << rev;

    return 0;
}