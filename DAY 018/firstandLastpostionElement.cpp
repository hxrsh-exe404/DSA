#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;              //first occurence
        }else if(arr[mid]<key){     // goto right 
            start=mid+1;
        }else if(arr[mid]>key){     //goto left
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;            //last occurence
        }else if(arr[mid]<key){     // goto right 
            start=mid+1;
        }else if(arr[mid]>key){     //goto left
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[5]={1,3,3,3,5};
    cout<<"First Occurence of 3 is at Index "<< firstOcc(arr,5,3)<<endl;
    cout<<"Last Occurence of 3 is at Index "<< lastOcc(arr,5,3)<<endl;


    return 0 ; 
}