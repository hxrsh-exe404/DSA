#include<iostream>
using namespace std; 
int product(int x[],int n){
    int p=1;  
    for(int i=0;i<n;i++){
        p=p*x[i];
    }
    return p;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter an Array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<product(arr,n);
    
}