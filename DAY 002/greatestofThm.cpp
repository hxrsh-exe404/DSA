#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if (a>b and a>c){
    cout<<a<<" is greatest of them";
    }else if(b>c){
        cout<<b<< " is greatest of them";
    }else{
        cout<<c<< " is greatest of them";
    }


}
