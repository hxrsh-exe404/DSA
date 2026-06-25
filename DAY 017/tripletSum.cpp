#include<iostream>
using namespace std;

void triplet_sum(int arr[], int size, int key){
    int sum = key;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(sum==arr[i]+arr[j]+arr[k]){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int sum = 12;
    triplet_sum(arr,5,12);
} 