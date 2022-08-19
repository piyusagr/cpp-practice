#include<bits/stdc++.h>
using namespace std;
int count1(int n){
    int c=0;
    while(n)
    {   n=n&(n-1);
        c++;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    cout<<count1(n);
}