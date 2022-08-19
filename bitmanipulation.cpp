#include<bits/stdc++.h>
using namespace std;
   int n,pos;
    
int getbit(){

    return ((n&(1<<pos))!=0);
}
int setBit(){
    return ((n|(1<<pos)));
}
int clearbit(){
    return (n&(~(1<<pos)));
}
int updatebit(int value){
    return (clearbit() | (value<<pos));
}
int main(){
    int value;
        cin>>n>>pos>>value;
    cout<<getbit()<<" "<<setBit()<<" "<<clearbit()<<" "<<updatebit(value)<<endl;
}