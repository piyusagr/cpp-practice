#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> a={10,5,4,2,10,20,5,6,5};
    cout<<a.size();
    a.insert(1000);
    a.insert(200);
    a.erase(a.find(10));
    for(auto& i:a){
         cout<<i<<"   ";
    }
    auto i=a.find(20);
    cout<<*i;
}  