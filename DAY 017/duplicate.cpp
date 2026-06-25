#include<iostream>
using namespace std;

int Duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        // XOR of array elements 
        ans=ans^arr[i];
    }
    for(int i=1;i<size-1;i++){
        //XOR of (1 to N-1) numbers
        ans=ans^i;
    }
    return ans;
}

int main(){
    int arr[5]={1,2,3,4,4};
    cout<<Duplicate(arr,5)<<" ";
}