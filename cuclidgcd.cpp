#include<bits/stdc++.h>
using namespace std;
int euclidgcd(int a,int b){
    int c=a%b;
    if(c==0)
      return b;
    euclidgcd(b,c);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<euclidgcd(a,b);
}