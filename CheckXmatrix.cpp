#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> grid = {{2, 0, 0, 1}, {0, 3, 1, 0}, {0, 5, 2, 0}, {4, 0, 0, 2}};
    // print principle diagonal
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid.size(); j++)
        {
            if (i == j)
            {
                cout << "Principle diagonal " << grid[i][j] << endl;
            }
            else if ((i + j) == grid.size() - 1)
            {
                cout << "Secondary diagonal " << grid[i][j] << endl;
            }
        }
    }
    return 0;
}