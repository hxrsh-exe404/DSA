#include<iostream>
using namespace std;

    //1--> even
    //0--> odd
bool isEven(int a){
    if(a&1)             // 7 & 1 --> 1 
    return 0;
    return 1;
}
    int main(){
        int num;
        cin>>num;
        if(isEven(num)){
            cout<<"Number is Even"<<endl;
        }else{
            cout<<"Number is Odd"<<endl;
        }
    }
