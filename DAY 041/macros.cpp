#include<iostream>
using namespace std;

#define PI 3.14   // --> no storage

int main(){
    int r = 5;
//    double pi = 3.14;    --> storage 
    double area = PI*r*r;
    cout<<endl<<"Area --> "<<area<<endl;
}