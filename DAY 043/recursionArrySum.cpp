#include<iostream>
using namespace std;

int arraySum(int arr[], int size){
    //base case
    if(size==1){
        return arr[0];
    }
    if(size==0){
        return 0;
    }

    //recursion 
    int remainingPart = arraySum(arr+1,size-1);
    int sum = arr[0]+remainingPart;
    return sum;
}

int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;

    int ans = arraySum(arr,size);
    cout<<endl<<"Sum --> "<<ans<<endl;

    return 0;
}