#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row : ";
    cin>>row;
    cout<<"enter col : ";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0)
            cout<<j<<" ";
            else
            cout<<char(j+64)<<" ";
        }cout<<endl;
    }  
}