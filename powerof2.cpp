#include<bits/stdc++.h>
using namespace std;
bool power(int n){
    return n&&!((n&(n-1)));
}
int main(){
    int n;
    cin>>n;
    // int c=power(n);
    // if(c==0)
    //    cout<<"power of 2"<endl;
    // else
       cout<<power(n)<<endl;

}