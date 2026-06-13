#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x=2;
    int* p;
    p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    //cout<<x<<endl;
    cout<<*p<<endl;    // star operator
    cout<<&p<<endl;
}