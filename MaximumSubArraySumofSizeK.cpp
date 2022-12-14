#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of array :";
    cin >> n;
    cout << "\n Enter the elements of array : \n";
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cout << "\n Enter the window size(K) : ";
    cin >> k;

    int i = 0, j = 0;
    int sum = 0;
    int mx = INT32_MIN;

    while (j < v.size())
    {

        sum += v[j];
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            mx = max(mx, sum);
            sum = sum - v[i];
            i++;
            j++;
        }
    }
    cout << "\n Maximum subarray sum is --> " << sum << endl;
    return 0;
}