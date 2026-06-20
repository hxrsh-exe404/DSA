#include<iostream>
using namespace std;
int main (){
    int a,b;
    char op;
    cout<<"enter a first number : ";
    cin>>a;
    cout<<"enter a second number : ";
    cin>>b;
    cout<<"enter the operator : ";
    cin>>op;
    switch(op){
        case '+' : cout<<a+b<<endl;
                    break;
        case '-' : cout<<a-b<<endl;
                    break;
        case '*' : cout<<a*b<<endl;
                    break;
        case '/' : cout<<a/b<<endl;
                    break;
        case '%' : cout<<a%b<<endl;
                    break;
        default : cout<<"enter a valid operarion";

    }    
}