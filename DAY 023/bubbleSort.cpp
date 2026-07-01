#include<iostream>
using namespace std;

// Bubble Sort
// In every round, the largest unsorted element moves to its correct position.
void bubbleSort(int arr[], int size){
    for(int i=0;i<size-1;i++){      // for round 1 to n-1
        bool swapped = false;
        for(int j=0;j<size-i-1;j++){  // size-i-1 --> last element sort in every round
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)        // already shorted
            break;
    }
}

int main(){
    int arr[6]={10,1,7,6,14,9}; 
    bubbleSort(arr,6);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";

    return 0;
}