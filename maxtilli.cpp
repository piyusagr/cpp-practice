#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ma[n]; 
    ma[0]=a[0];
    for(int i=1;i<n;i++){
        ma[i]=max(ma[i-1],a[i]);

    }
    for(int i=0;i<n;i++)
       cout<<a[i]<<" "<<ma[i]<<endl;
}