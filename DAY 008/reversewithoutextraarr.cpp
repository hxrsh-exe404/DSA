#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6}; 
    int n=sizeof(arr)/4;
    cout<<"actual array : ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    // reverse without extra array -->
    int i=0;
    int j=n-1;
    while(i<j){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }cout<<endl;
    cout<<"reverse array : ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }

}