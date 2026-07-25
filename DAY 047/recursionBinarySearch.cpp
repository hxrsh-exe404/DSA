#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){
    int mid = start + (end-start)/2;
    //base case
    // element not found -->
    if(start>end)
        return false;
    // element found -->
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, end, key);
    }else{
        return binarySearch(arr, start, mid-1, key);
    }
}

int main(){
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=16;

    cout<<endl<<"Present or Not --> "<< binarySearch(arr,0,5,key)<<endl;
}