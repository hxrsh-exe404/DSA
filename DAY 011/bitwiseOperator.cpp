#include<iostream>
using namespace std;
int main(){
    int a=4,b=6;    //a--> 100 , b--> 110
    cout<<"Bitwise AND : "<< (a&b)<<endl;
    cout<<"Bitwise OR : "<< (a|b)<<endl;
    cout<<"Bitwise NOT : "<< (~a)<<endl;     //   ~a=(-a+1)
    cout<<"Bitwise XOR : "<< (a^b)<<endl;
    cout<<"Left Shift : "<< (a<<2)<<endl;    // 2times-->   *2
    cout<<"Right Shift : "<< (a>>2)<<endl;   // 2times-->   /2
} 