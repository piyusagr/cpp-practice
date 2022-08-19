#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<*(v.begin()+i);
    // }
    cout << "size: " << (v.size()) << endl;
    cout << "capacity: " << (v.capacity()) << endl;
    cout << v.max_size() << endl;
    v.push_back(7);
    cout << "size: " << (v.size()) << endl;
    cout << "capacity: " << (v.capacity()) << endl;
    int cap = v.capacity();
    for (int i = 0; i < 100; i++)
    {
        v.push_back(i);
        if (cap != v.capacity())
        {
            cap = v.capacity();
            cout << v.capacity() << endl;
        }
    }

    cout<<*(v.begin()+163)<<endl;
    cout<<v.at(103)<<endl;
    cout<<v.front()<<"  back "<<v.back()<<endl;
    v.insert(v.begin()+2,-100);
    cout<<*(v.begin()+2)<<" size "<<v.size()<<endl;
    v.pop_back();
    cout<<"size after pop "<<v.size()<<endl;

    list<int> l1={123, 345, 3232, 1212};
    v.insert(v.begin(),l1.begin(),l1.end());
    cout<<v[0]<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<*(v.begin()+i)<<" \n";
    }
}    
