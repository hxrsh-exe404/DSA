#include<iostream>
using namespace std;
int main(){
    string s= "Hello";
    cout<<s<<endl;
    s.push_back('!');     //  <-- push any one character in teh last 
    cout<<s<<endl;
    s.pop_back();        //  <-- pop one character from the last
    cout<<s<<endl;
    s.append(" Hxrsh");      //  <-- append full string in the last
    cout<<s<<endl;
    s.clear();
    cout<<s<<s.length()<<endl;         // <-- clear the string

}