#include<iostream>
using namespace std; 
int main(){
    int arr[] = {1,6,5,8,1,4,6,7,9,3,0};
    int n= sizeof(arr)/4;
     int mx=arr[0];   // mx = INT_MIN;
    for(int i=1;i<n;i++){
       
        if(arr[i]>mx) mx=arr[i];
        // mx= max(mx,arr[i]);      --> can also
        
    }
    cout<<mx;
}