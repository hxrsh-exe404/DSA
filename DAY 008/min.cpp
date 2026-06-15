#include<iostream>
using namespace std; 
int main(){
    int arr[] = {1,6,5,8,1,4,6,7,9,3,0};
    int n= sizeof(arr)/4;
     int mn=arr[0];  // mn=INT_MAX;
    for(int i=1;i<n;i++){
       
        if(arr[i]<mn) mn=arr[i];
        // mn= mix(mx,arr[i]);      --> can also
        
    }
    cout<<mn;
}