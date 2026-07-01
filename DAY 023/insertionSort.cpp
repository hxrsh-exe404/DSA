#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){            //shift
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[4]={4,12,11,20};
    insertionSort(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}