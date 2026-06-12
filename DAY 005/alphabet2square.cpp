#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row : ";
    cin>>row;
    cout<<"enter col : ";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<char(j+96)<<" ";   //97-->a

        }cout<<endl;
    }
    
}