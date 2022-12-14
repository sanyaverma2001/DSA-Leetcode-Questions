#include <bits/stdc++.h>
using namespace std;
int mani()
{
    int n1 = 6, n2 = 5, n3 = 8;
    int A[n1] = {1, 5, 10, 20, 40, 80};
    int B[n2] = {6, 7, 20, 80, 100};
    int C[n3] = {3, 4, 15, 20, 30, 70, 80, 120};

    //   method 1 using while loop

    int i = 0, j = 0, k = 0;
    cout << "\n \t common elements in three sorted array is :  ";

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            cout << A[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return 0;
}