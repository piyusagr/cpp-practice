#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>  S;
    for(int i=0;i<5;i++){
        S.push(i);

    }
    cout<<S.size()<<endl;
    cout<<"top"<<S.top()<<endl;
    S.pop();
    cout<<S.empty()<<endl;
    cout<<"top "<<S.top()<<endl;
    return 0;
}