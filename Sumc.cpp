// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;


char* sm(string& S, int K)
{
	
	int N = S.size();

	
	stack<char> answer;
   
	
	for (int i = 0; i < input2; ++i) {

		
		if (answer.empty()) {
			answer.push(input4[i]);
		}
		else {

			
			while ((!answer.empty())
				&& (input4[i] < answer.top())

				
				&& (answer.size() - 1 + N - i >= input3)) {
				answer.pop();
			}

			
			if (answer.empty() || answer.size() < input3) {

				
				answer.push(input4[i]);
			}
		}
	}

	
	string ret;

	
	while (!answer.empty()) {
		ret.push_back(answer.top());
		answer.pop();
	}

	
	reverse(ret.begin(), ret.end());
    
	
	// cout << ret;
    return ret;
}


int main()
{
	string S="rfvo";
	int K = 2;
	cout<<sm(S, K);

	return 0;
}
