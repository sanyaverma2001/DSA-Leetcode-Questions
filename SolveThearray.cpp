// 150. Evaluate Reverse Polish Notation
// Medium

// 4599

// 779

// Add to List

// Share
// Evaluate the value of an arithmetic expression in Reverse Polish Notation.

// Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

// Note that division between two integers should truncate toward zero.

// It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

// Example 1:

// Input: tokens = ["2","1","+","3","*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> v = {"2", "1", "+", "3", "*"};
    stack<long> st;

    for (auto s : v)
    {
        if (s == "+" || s == "-" || s == "*" || s == "/")
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();

            if (s == "+")
            {
                st.push(x + y);
            }
            if (s == "-")
            {
                st.push(y - x);
            }
            if (s == "*")
            {
                st.push(x * y);
            }
            if (s == "/")
            {
                st.push(y / x);
            }
        }
        else
        {
            int n = stoi(s);
            st.push(n);
        }
    }

    cout << st.top() << endl;

    return 0;
}