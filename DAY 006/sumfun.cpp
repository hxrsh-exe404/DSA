#include<iostream>
using namespace std;
int sum (int a , int b){ 
    return (a+b);
}
/*

void sum (int a, int b){
    cout<< a+b;
}

*/ 

int main(){
    int a,b;
    cout<<"Enter a first no. : ";
    cin>>a;
    cout<<"Enter a second no. : ";
    cin>>b;
    cout<<sum(a,b);
    
}