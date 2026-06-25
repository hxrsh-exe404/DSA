#include<iostream>
using namespace std;

void pairSum(int arr[],int size,int key){
    int sum=key;
    int n;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if(sum==arr[i]+arr[j]){
                cout<<arr[i]<<" "<<arr[j]<<endl;
           }
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int key=5;
    pairSum(arr,6,5);
}