#include<iostream>
using namespace std;
int main(){
    string s= "Hello";
    cout<<s<<" "<<s.length()<<endl;
    s = s + " Hxrsh";       //      <-- used (+) operator intsead of append
    cout<<s<<" "<<s.length()<<endl;
    s = "Hxrsh " + s;       //  <-- used it any where
    cout<<s<<" "<<s.length()<<endl;
}