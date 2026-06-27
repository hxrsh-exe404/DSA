#include<iostream>
using namespace std;

int getPivort(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start; //return end; both give same output
}

int main(){
    int arr[5]={8,10,17,1,3};
    cout<<"Pivort is "<<getPivort(arr,5)<<endl;

    return 0;
}  