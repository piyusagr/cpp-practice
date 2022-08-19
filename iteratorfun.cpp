#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1 , 2 , 3 , 4 , 5 , 6 , 7};
    cout<<"begin: "<<*v.begin();
    cout<<"end: "<<*v.end();
    cout<<"rbegin: "<<*v.rbegin();
    cout<<endl<<"before insertion"<<endl;
    for(int i=0;i<v.size();i++)
       cout<<*(v.begin()+i)<<endl;
    cout<<"after insertion\n";
    for(int i=0;i<v.size();i++){
        if(*(v.begin()+i)==3)
           v.insert((v.begin()+i),100);

    }
    for(int i=0;i<=v.size();i++)
       cout<<*(v.begin()+i)<<endl;
   
}
