#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;                      //We use this formula for mid to avoid exceeding the int range.
    int mid = start + (end-start)/2;       // mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;     //key found 
        }
        if(key>arr[mid]){       //go to right part
            start = mid+1;
        }else{
            end = mid-1;        //go to left part
        }
        mid = start + (end-start)/2;  
    }
    return -1;      //key not found
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenIndex = binarySearch(even,6,18);
    cout<<"Index of 18 is "<< evenIndex << endl;
    int oddIndex = binarySearch(odd,5,3);
    cout<<"Index of 3 is "<< oddIndex << endl;

    return 0;
}