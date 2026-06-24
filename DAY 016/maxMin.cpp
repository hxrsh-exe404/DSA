#include<iostream>
#include<limits.h>
using namespace std;

// returning min value
int getMin(int arr[], int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){               // mini=min(mini,arr[i]);
            min=arr[i];
        }
    }return min;
}

// returning max value
int getMax(int arr[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){             // maxi=max(maxi,arr[i]);
            max=arr[i];
        }
    }return max;
}


int main(){
    int size;
    cout<<"Enter array size : ";
    cin>>size;
    int arr[100];

    // taking input in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    cout<<"Maximum value is " <<getMax(arr,size)<<endl;
    cout<<"Minimum value is " <<getMin(arr,size)<<endl;


    return 0;
}