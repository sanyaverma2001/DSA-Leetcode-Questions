#include <bits/stdc++.h>

using namespace std;
//[[2,1,5],[3,3,7]]  [numofpassengers,to,from]
int main()
{
    vector<vector<int>> v;
    vector<int> temp;
    temp.push_back(2);
    temp.push_back(1);
    temp.push_back(5);
    v.push_back(temp);
    temp.clear();
    temp.push_back(3);
    temp.push_back(3);
    temp.push_back(7);
    v.push_back(temp);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    int capacity=4; // capacity of car 

    // we have to check if it is possible to drop all the passengers 

    // for this we will use min heap i.e. priority queue

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; // declaration of min heap

    for(int i=0;i<v.size();i++){
        // we will add from and number of passengers

        pq.push({v[i][1],v[i][0]});
        pq.push({v[i][2],-v[i][0]});
    }

cout<<endl;
while(!pq.empty()){
    cout<< pq.top().first<< "," <<pq.top().second<<endl;
    pq.pop();
}

int check=0;

while (!pq.empty())
{
    check+=pq.top().second;
    pq.pop();

    if(check>capacity){
        cout<<" Not possible";
        break;
    }
}



}