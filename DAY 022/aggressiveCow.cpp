#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[], int size, int cows, int mid){

    int cowCount = 1;
    int lastPos = arr[0];

    for(int i=1;i<size;i++){

        if(arr[i]-lastPos >= mid){

            cowCount++;
            lastPos = arr[i];

            if(cowCount == cows)
                return true;
        }
    }

    return false;
}

int aggressiveCow(int arr[], int size, int cows){

    sort(arr, arr+size);

    int start = 0;
    int end = arr[size-1]-arr[0];
    int ans = -1;

    while(start<=end){

        int mid = start + (end-start)/2;

        if(isPossible(arr,size,cows,mid)){
            ans = mid;
            start = mid+1;     // larger distance try karo
        }
        else{
            end = mid-1;
        }
    }

    return ans;
}

int main(){

    int arr[] = {4,2,1,3,6};

    cout << aggressiveCow(arr,5,2);

    return 0;
}