#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning"<<endl;
    return;                        // function is over not run below line
    cout<<"How are you?"<<endl;
}
int main(){      // main() ---> only come once and fun str with main()
    greet();
    cout<<"Hey"<<endl;
    greet();
}