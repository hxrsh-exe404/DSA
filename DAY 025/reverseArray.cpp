#include<iostream>
#include<vector>

using namespace std;

void reverse(vector<int> &arr , int size ){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> arr = {11,7,3,12,4};
    cout<<"Actual --> ";
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;

    reverse(arr,arr.size());

    cout<<"Reverse --> ";
    for(int i:arr){
        cout<<i<<" ";
    }
    
}