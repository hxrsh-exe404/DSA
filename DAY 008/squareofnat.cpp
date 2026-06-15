#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    int arr[n];
    arr[0]=1;
    for(int i=1;i<n;i++){
        arr[i]=i*n;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}