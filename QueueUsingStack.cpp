#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    stack<int> s1, s2;
    Queue()
    {
    }

    int push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

    int peek()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();

        return x;
    }

    bool isempty()
    {
        return (s1.empty() && s2.empty());
    }
};

int main()
{

    Queue q;
    for(int i=1;i<=10;i++){
        q.push(i);
    }
    cout<<q.peek()<<endl;
    


    return 0;
}