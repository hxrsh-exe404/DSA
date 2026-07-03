#include<iostream>
#include<vector>
using namespace std;

void moveZero(vector<int> &arr){
    int start=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[start]);
            start++;
        }
    }
}

int main(){
    vector<int> arr={0,1,0,3,12,0};
    
    cout<<"Actual --> ";
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;

    moveZero(arr);

    cout<<"Move Zeros --> ";
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;
}