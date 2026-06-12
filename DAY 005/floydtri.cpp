#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row : ";
    cin>>row;
    int a=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+1; //a++;

        }cout<<endl;
    }
    
}