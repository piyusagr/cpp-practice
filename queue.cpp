#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    cout << q.empty() << endl;
    int a;
    for (int i = 0; i < 6; i++)
    {
        cin >> a;
        q.push(a);
    }
//    for (int i = 0; i < 6; i++)
//     {
//        cout<<q[i]<<endl;
//     }
   
        cout << (q.front() ) << endl<<q.back()<<endl;
    q.pop();
     cout << (q.front() ) << endl<<q.back();
}