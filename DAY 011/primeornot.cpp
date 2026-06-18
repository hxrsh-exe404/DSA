#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }else{
            cout<<"Prime number"<<endl;
            break;
        }   
    }
}

/*  
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"NOT PRIME"
            break;
        }else{
            cout<<"PRIME"
            break;
        }
        i++;
    }




*/