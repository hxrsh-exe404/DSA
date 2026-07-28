#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivort = arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivort){
            count++;
        }
    }
    // Place pivirt at right place 
    int pivortIndex = s+count;
    swap(arr[pivortIndex], arr[s]);

    // left and right part 
    int i=s, j=e;
    while(i<pivortIndex && j>pivortIndex){
        while(arr[i]<pivort){
            i++;
        }
        while(arr[j]>pivort){
            j--;
        }
        if(i<pivortIndex && j>pivortIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivortIndex;
}


void quickSort(int arr[], int s, int e){
    // Base Case
    if(s>=e)
        return ;

    // partition 
    int p=partition(arr, s, e);

    // left part sort
    quickSort(arr, s, p-1);

    // Right part sort
    quickSort(arr, p+1, e);

}

int main(){
    int arr[5]={2,4,1,6,9};
    int n = 5;
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}