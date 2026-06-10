#include<iostream>
using namespace std;
int main(){
// 1st method
    int n;
    cout<<"Enter last term : ";
    cin>>n;
    for(int i=1; i<=(2*n)-1; i+=2){     // nth term --> an=2n-1
        cout<<i<<endl;
    }
// 2nd method
    /*
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
        } 
    */

}
