#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> v = {1, 2, 3, 4, 5};
 
    cout << "size: " << (v.size()) << endl;

    v.push_front(7);
    v.pop_back();
    v.clear();
    // cout<<*(v.begin()+163)<<endl;
   
    // cout<<"size after pop "<<v.size()<<endl;
  for(deque<int>::iterator it=v.begin();it!=v.end();++it){
        cout<<*it<<endl;
    }
}    
