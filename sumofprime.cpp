#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{   bool flag = true;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0){
            flag=false;
            break;
        }
            // return false;
    }

   return flag;
}

int main()
{
    int low, high;
    cin >> low >> high;
    int sum = 0;

    for (int i = low; i <= high; i++)
    {
        if (isPrime(abs(i)))
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\n Sum of prime is ----> " << sum;
    return 0;
}