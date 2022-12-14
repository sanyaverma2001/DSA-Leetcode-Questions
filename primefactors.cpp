#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> v1;
bool isprime(int n)
{
    int ans = true;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            ans = false;
            break;
        }
    }

    return ans;
}

void factors(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
}

int main()
{

    int n;
    cout << " enter a number :";
    cin >> n;

    factors(n);
    while (v.size() != 0)
    {
        cout << endl;

        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i] << " ";

            bool ans = isprime(v[i]);
            if (ans)
            {
                v.pop_back();
            }
            else
            {
                v1.push_back(v[i]);
            }
        }
        cout << endl;
        for (int i = v1.size() - 1; i >= 0; i--)
        { //

            factors(v1[i]);
            cout<<endl;

            cout << v1[i] << " ";
            cout << endl;
            v1.pop_back();
        }
    }

    return 0;
}