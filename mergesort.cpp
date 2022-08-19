#include<bits/stdc++.h>
using namespace std;
void sorts(int a[], int l, int mid, int r){
    int b[r];
    int i=l;
    int j=mid+1,x=0;
    while(i<=mid&&j<=r){
        if(a[i]<a[j])
           b[x++]=a[i++];
        else
           b[x++]=a[j++];
    }
    while(i<=mid){
        b[x++]=a[i++];
    }
    while(j<=r){
        b[x++]=a[j++];
    }
    x=0;
    for(int i=l;i<=r;i++){
        a[i]=b[x++];
    }

}
void merge(int a[], int l, int  r){
    if(l<r){
        int mid=(l+r)/2;
        merge(a,l,mid);
        merge(a,mid+1,r);
        sorts(a,l,mid,r);

    }
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge(a,0,n-1);
    for(int i=0;i<n;i++)
      cout<<a[i]<<endl;
}