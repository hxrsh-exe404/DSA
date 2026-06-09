#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a positive/negative number : ";
    cin>> x;
    if(x>=0)  
        cout<<"Absolute value of "<< x << " is " << x;
    else
        cout<<"Absolute value of "<< x << " is " << -x;
}
