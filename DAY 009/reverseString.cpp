#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    string s= "Hello";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s;
}
