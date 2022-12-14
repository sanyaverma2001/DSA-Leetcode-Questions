#include <bits/stdc++.h>
using namespace std;
void RevTable(int n, int i)
{
    if (i > 10)
        return;
   
    RevTable(n, i + 1);
     cout << n << " X " << i << " = " << n * i << endl;
}

int main()
{
    int n, i;
    cout << "enter the number : ";
    cin >> n;
    RevTable(n,1);

    return 0;
}