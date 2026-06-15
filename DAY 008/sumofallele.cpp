#include<iostream>
using namespace std; 
int sum(int x[],int n){
    int s=0;  
    for(int i=0;i<n;i++){
        s=s+x[i];
    }
    return s;
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
    cout<<sum(arr,n);
    
}