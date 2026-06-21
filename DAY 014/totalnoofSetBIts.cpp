#include<iostream>
using namespace std;
int Set_Bits(int n){
    int count=0;
    while(n){
        if(n&1)
        count++;
        n=n>>1;
    }
    return count;

}
int main(){
    int a,b;
    cout<<"Enter First number : ";
    cin>>a;
    cout<<"Enter Second number : ";
    cin>>b;
    cout<<Set_Bits(a) + Set_Bits(b);
}