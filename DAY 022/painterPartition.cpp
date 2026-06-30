#include<iostream>
using namespace std;

bool isPossible(int arr[],int size, int peoples, int mid){
    int painterCount=1;
    int paintSum=0;
    for(int i=0;i<size;i++){
        if(arr[i]>mid)
           return false;
        if(paintSum+arr[i]<=mid){
            paintSum+=arr[i];
        }else{
            painterCount++;
            if(painterCount>peoples)
                return false;
                paintSum=arr[i];
        }
    }
    return true;
}


int allocatePaint(int arr[],int size, int peoples){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int start=0;
    int ans=-1;
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,size,peoples,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[4]={5,5,5,5};
    int size=4;
    int people=2;
    cout<<allocatePaint(arr,size,people);

    return 0;
}
    
