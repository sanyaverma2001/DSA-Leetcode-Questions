#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    int neg[n];
    int j = 0;

    int pos[n];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg[k++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos[j++] = arr[i];
        }
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        cout << neg[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < j; i++)
    {
        cout << pos[i] << " ";
    }

    int res[n];

    int i = 0, p = 0,r=0;

    while (i < k && i < j)
    {
       res[r++]=neg[i];
       res[r++]=pos[i++];
       
    }

    while (i < k)
    {
        res[r++] = neg[i++];
      
    }
    while (i < j)
    {
        res[r++] = pos[i++];
      
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}