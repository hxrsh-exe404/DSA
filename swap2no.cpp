#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x=2,y=5;
    cout<<x<<" "<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;

}