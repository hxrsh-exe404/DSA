#include<iostream>
using namespace std;

void revString(char name[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int main(){
    char name[20];
    cout<<"Enter Your Name : ";
    cin>>name;

    cout<<"Your Name is : "<<name<<endl;
    revString(name,5);
    cout<<"Reverse String  --> "<<name<<endl;
}