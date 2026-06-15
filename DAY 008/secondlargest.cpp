#include<iostream>
using namespace std;
int main(){
    int arr[5]={8,81,4,60,40};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx<<endl;
    int second_mx=arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]!=mx) second_mx=max(second_mx,arr[j]);
    }cout<<second_mx;
    
}