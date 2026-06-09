#include<iostream>
using namespace std;
int main (){
    int x ;
    cout<<"enter a number : ";
    cin>>x;
    if(x%3==0 || x%5==0){     
        cout<<x<<" is div by 5 or 3";
    }else
    cout<<x<<" is not div by 5 or 3";
}