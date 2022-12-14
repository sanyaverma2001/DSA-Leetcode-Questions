#include <bits/stdc++.h>
using namespace std;

vector<int> students = {1,1,1,0,0,1};
vector<int> sandwiches = {1,0,0,0,1,1};

int count()
{
    queue<int> q;
    for (int i = 0; i < students.size(); i++)
    {
        q.push(i);
    }

    int count0 = 0, count1 = 0;

    for (int it : students)
    {
        if (it == 1)
            count1++;
        else
            count0++;
    }

    int i = 0;

    while (!q.empty())
    {
        int fw = q.front();

        if (students[fw] == sandwiches[i])
        {
            i++;
            q.pop();
            students[fw] == 1 ? count1-- : count0--;
        }
        else
        {
            if (students[fw] == 1 && q.size() == count1)
                break;
            if (students[fw] == 0 && q.size() == count0)
                break;

            q.pop();
            q.push(fw);
        }
    }

    return q.size();
}

int main()
{

    cout << "Number of students unable to eat lunch is : " << count();
    return 0;
}