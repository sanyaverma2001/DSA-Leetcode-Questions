#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &errorScore)
{
    for (auto i : errorScore)
    {
        if (i != 0)
            return false;
    }
    return true;
}
int minProject(vector<int> &errorScore, int comP, int othQ)
{
    int cnt = 0;
    for (int i = 0; i < errorScore.size(); i++)
    {

        errorScore[i] = errorScore[i] - comP;
        cnt++;
        for (int j = i + 1; j < errorScore.size(); j++)
        {
            errorScore[j] = errorScore[j] - othQ;
        }
        if (check(errorScore))
            break;
    }
    return cnt;
}

int main()
{
    vector<int> errorScore = {6, 4, 1};
    cout << minProject(errorScore, 4, 1);
    return 0;
}