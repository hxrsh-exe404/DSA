#include<iostream>
using namespace std;
void greet(){
        cout<<"Hey"<<endl;
        greet();                //repetition
    }
    int main(){
        greet();
    }
