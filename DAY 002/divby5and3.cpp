#include<iostream>
using namespace std;
int main (){
    int x ;
    cout<<"enter a number : ";
    cin>>x;
    if(x%3==0 && x%5==0){     // x%15==0 is also give us a right oupt
        cout<<x<<" is div by both 5 and 3";
    }else
    cout<<x<<" is not div by 5 and 3";
}