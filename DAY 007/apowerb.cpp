#include<iostream>
using namespace std;
int pow(int x, int y){
    if(y==0)return 1;
    return x*pow(x,y-1);
     
}
int main(){
    int a,b;
    cout<<"Enter a base : ";
    cin>>a;
    cout<<"Enter a power : ";
    cin>>b;
    cout<<pow(a,b);
}