#include <bits/stdc++.h>

using namespace std;

int result(vector<int> arr, int target)
{
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == target)
            temp.push_back(i);
    }
    int n = temp.size();
    int res = rand() % temp.size();

    return temp[res];
}
int main()
{
    vector<int> arr;

    int n, target;
    cout << "enter the size of array :";
    cin >> n;

    // cout << "\n Enter the elements of array :";

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element of array :";
        int x;
        cin >> x;
        arr.push_back(x);

        cout << endl;
    }
    cout << endl;
    cout << "Elements of array is as :";
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << " Enter the target element :";

    cin >> target;
    cout << "the probablity of getting  " << target << " is :";
    cout << result(arr, target);

    return 0;
}