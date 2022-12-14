#include <bits/stdc++.h>
using namespace std;

vector<int> products;

void add(int num)
{
    if (num == 0)
    {
        products.clear();
        products.push_back(1);
    }
    else
    {
        products.push_back(products.back() * num);
    }
}

int ProductOfKnumbers(int k)
{
    if (++k > products.size())
        return 0;

 
  return products.back()/products[products.size()-k];

  
}
void print()
{
    for (auto x : products)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{

    for (int i = 0; i < 10; i++)
    {
        add(i);
    }
    print();
    cout<<ProductOfKnumbers(3);
    return 0;
}