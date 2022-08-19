#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, string> m = {{10, "cat"}, {20, "ddd"}};
    cout << "size" << m.size();
    m.insert({100, "tgrf"});
    m.insert({10, "grit"});
    cout << "size" << m.size() << endl;
    ;
    for (auto &p : m)
        cout << p.first << " , " << p.second << endl;

    // auto it=m.erase(m.find(100));
    int num = m.erase(15);
    cout << num << endl;
    for (auto &p : m)
        cout << p.first << " , " << p.second << endl;
    auto range=m.equal_range(10);
    for(auto it=range.first;it!=range.second;++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}