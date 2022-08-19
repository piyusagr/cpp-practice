#include<iostream>
using namespace std;
int facrtorial(int n){
    if(n==0||n==1){
        return n;

    }
    return n*facrtorial(n-1);
}
int main(){
    int n,fact=1;
    cin>>n;
    cout<<facrtorial(n);
}