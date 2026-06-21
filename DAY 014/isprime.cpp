#include<iostream>
using namespace std;



bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){ 
            return 0;   // not a prime
        }
    }
    return 1;       // prime
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPrime(n)){
        cout<<" is a prime no. "<<endl;     // 1
    }else{
        cout<<"is not a prime no. "<<endl;  // 0
    }
    return 0;
} 