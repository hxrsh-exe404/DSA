#include<iostream>
#include<vector>
using namespace std;
    
void rotateArray(vector<int> &arr, int k){
    int n =arr.size();
    vector<int>temp(n);
    for(int i=0;i<arr.size();i++){
        temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;
}

int main(){
    vector<int>arr={1,7,9,11};
    int k=2;
    cout<<"Actual Array --> ";
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;

    rotateArray(arr,k);

    cout<<"Rotated Array --> ";
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;

}