#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Percentage : ";
    cin>>x;
    if(x>80 and x<=100){
    cout<<"Very Good";
    }else if(x>60 && x<81){
        cout<<"Good";
    }else if(x>40 and x<61){
        cout<<"Average";
    }else if(x<=40){
        cout<<"Fail";
    }else{
        cout<<"Invalid Percentage";
    }


}
