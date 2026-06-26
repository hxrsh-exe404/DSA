#include<iostream>
using namespace std;

int firstOccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]>key){
            end=end-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int lastOccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]>key){
            end=end-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[7]={1,2,3,3,3,3,5};
    int first =firstOccur(arr,7,3);
    int last =lastOccur(arr,7,3);
    cout<<"First Occurence of 3 is at Index "<< first<<endl;
    cout<<"Last Occurence of 3 is at Index "<< last<<endl;
    cout<<"Total no. of occurence of 3 is : "<<(last-first)+1<<endl;

}