#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {1, 4, 5, 3, 2};
    int money = 4;
    bool flag=false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] + arr[j] == money && i != j)
            {
                cout << i + 1 << " " << j + 1;
                flag=true;
                break;
            }
        }
        if(flag){
            break;
        }

    }
    return 0;
}