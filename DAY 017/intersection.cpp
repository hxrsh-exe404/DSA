#include<iostream>
#include<limits.h>
using namespace std;

void intersection (int arr[],int n , int brr[],int m){
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(arr[i]<arr[j]){
                break;
            }
            if(arr[i]==brr[j]){
                cout<<arr[i];
                brr[j]=INT_MIN;
                break;
            }
        }
    }
}
int main(){
    int arr[3]={1,2,3};
    int brr[2]={3,4};

    intersection(arr,3,brr,2);
}
  