#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int x[n];
    cout<<"enter array element : "; 
    for(int i=0;i<=n;i++){
        cin>>x[i];
    }
    for(int i=0;i<=5;i++){
        cout<<x[i]<<" ";
    }

}
