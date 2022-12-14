#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        func(n - 1);
        cout << n << " ";
        
    }
}
int main()
{

    int n = 5;
    func(n);
    cout << "\n recusion completed!!";
    return 0;
}