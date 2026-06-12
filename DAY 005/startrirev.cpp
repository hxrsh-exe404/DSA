#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter row : ";
    cin>>row;
    
// 1st method ---->
/*

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i+j<=row)
            cout<<"  "<<" ";
            else
            cout<<"* "<<" ";
        }cout<<endl;
    }

*/


// 2nd method ---->

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i+1;j++){
            cout<<"  "<<" "; 
        }
        for(int k=1;k<=i;k++){
            cout<<"* "<<" ";
        }
        cout<<endl;
    }



 



    
}