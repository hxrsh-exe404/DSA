#include<iostream>
using namespace std;
//reverse an array 
void rev(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
//printing an array
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }cout<<endl;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={7,8,9,10,11};
    cout<<"Before Reverse an Array : "<<endl;
    printArray(arr,6);
    printArray(brr,6);

    rev(arr,6);
    rev(brr,5);
    cout<<"After Reverse an Array : "<<endl;
    printArray(arr,6);
    printArray(brr,6);

    return 0;
}
