#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> nums={1,2,3,4,5};
    cout<<*nums.begin()<<endl;
    for(list<int>::iterator it=nums.begin();it!=nums.end();++it){
        cout<<*it<<endl;
    }
    cout<<nums.size()<<endl;
    list<int> nums2=nums;
    for(list<int>::iterator it=nums2.begin();it!=nums2.end();++it){
        cout<<*it<<endl;
    }
    cout<<nums.front()<<" "<<nums.back()<<endl<<nums.empty();
    return 0;
}





