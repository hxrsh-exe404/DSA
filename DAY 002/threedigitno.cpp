#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    // if(x>99 and x<1000)
    if(x>99 && x<1000){ // if both true //can also use "and"
        cout<<x << " is THREE DIGIT number";
    }else{
        cout<<x << " is not a THREE DIGIT number";
    }

}
