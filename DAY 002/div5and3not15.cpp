#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if((x%5==0 or x%3==0) and (x%15!=0)){
        cout<<x<<" is div by 5 or 3 but not by 15";
    }else if((x%5==0 or x%3==0) and (x%15==0))
        cout<<x<<" is div by 5 or 3 and by 15 also";
    }

