#include "Complex.h"
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    // c=23;
    a=b=c=23;//chained assignment expression
    b=c+(a=20);//enbedded assignment ecpression
    a+=b;
    cout<<a<<b<<c<<endl;

}