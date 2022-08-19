#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int k,int size){
    int s=0;
    int e=size;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==k) 
        return mid;
        else if(arr[mid]>k)
         s=mid+1;
        else
        e=mid-1;
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<binary(a,k,n)<<endl;
}