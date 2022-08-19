#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i,c=0;
    for(i=0;i<n;i++){
        if(a[i]==k)
            {c=1;break;
            }
    }
    if(c)
    cout<<i+1<<endl;
    else
    cout<<-1<<endl;
}