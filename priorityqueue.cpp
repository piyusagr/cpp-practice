#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int,vector<int>, std::greater<int>> Q;   //std::less<int> is default
    // vector<int> v = {1, 3, 5, 7, 9, 8, 6, 4, 2};

    // for (int x : v)
    //     Q.push(*(v.begin() + x));
    // while (!Q.empty())
    // {
    //     cout << Q.top() << " ";
    //     Q.pop();
    // }

auto cmp=[](int a, int b){
    return a>b;
};
     priority_queue<int,vector<int>, decltype(cmp)> Q(cmp);   //std::less<int> is default
    vector<int> v = {1, 3, 5, 7, 9, 8, 6, 4, 2};

    for (int x : v)
        Q.push(*(v.begin() + x));
    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }
 
}