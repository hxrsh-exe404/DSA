#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String : ";
//    cin>>s;  // <--- only take input before the space
    getline(cin,s);     //  <--- instead of cin
    cout<<s;
}