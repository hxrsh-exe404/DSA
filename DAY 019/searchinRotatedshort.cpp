#include<iostream>
using namespace std;

//<----------finding a pivort element ---------->
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

//
int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;                           //We use this formula for mid to avoid exceeding the int range.
    int mid = start + (end-start)/2;       //mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;                    //key found 
        }
        if(key>arr[mid]){                  //go to right part
            start = mid+1;
        }else{
            end = mid-1;                   //go to left part
        }
        mid = start + (end-start)/2;  
    }
    return -1;                             //key not found
}

//<------------finding a key -------->
int findPosition(int arr[], int size, int key){
    int pivort = getPivort(arr,size);
    if(key>=arr[pivort] && key<=arr[size-1]){
        return binarySearch(arr,pivort,size-1,key);         //binary search on second line
    }else{
        return binarySearch(arr,0,pivort-1,key);            //binary search on first line
    }
}

int main(){
    int arr[5]={8,10,17,1,3};
    int key = 17;
    cout<<"Index = "<<findPosition(arr,5,key);
    
    return 0;
}  