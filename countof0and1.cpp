#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[10] = {11, 22, 90, 45, 81, 78, 65, 91, 50, 88};
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        int n = arr[i];
        while (n != 0)
        {
            int rem = n % 10;
            if (rem == 0 || rem == 1)
            {
                count++;
                break;
            }
            n = n / 10;
        }
    }

    for (int i=0;i<10;i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
    cout << "The count of numbers in array containing 0 and 1 is ---> " << count;
    cout<<1%10;
    return 0;
}