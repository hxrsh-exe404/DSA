#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<string> s;            // stack --> LIFO
    s.push("Hxrsh");
    s.push("exe");

    cout<<"Before pop Size of stack : "<<s.size()<<endl;
    cout<<"Before pop Top Element --> "<<s.top()<<endl;
    s.pop();
    cout<<"After pop Top Element --> "<<s.top()<<endl;
    cout<<"After pop Size of stack : "<<s.size()<<endl;

    cout<<"Empty or not : "<<s.empty()<<endl;
}