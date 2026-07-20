#include<iostream>
using namespace std;

int factorial(int n){
    // base case -->
    if(n==0){
        return 1;
    }
    // recurcion -->
    return n*factorial(n-1);;
}


int main(){
    int n;
    cout<<"Enter a number --> ";
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
} 