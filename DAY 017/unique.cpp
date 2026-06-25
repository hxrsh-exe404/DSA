#include<iostream>
using namespace std;

int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<"Unique Element in the array is : "<<unique(arr,6);

    
}