#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6}; 
    int n=sizeof(arr)/4;
    int brr[n];
    cout<<"actual array : ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
        int j = n-1-i;
        brr[i]=arr[j];
    }
    cout<<endl<<"reverse array : ";
    for(int i=0;i<n;i++){
        cout<< brr[i]<<" ";

    }
}