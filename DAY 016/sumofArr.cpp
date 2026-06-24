#include<iostream>
using namespace std;

// sum function
int sum(int arr[],int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum = arr[i]+sum;
    }return sum;

}

int main(){
    int n;
    cout<<"Enetr a arry size : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<sum(arr,n)<<endl;
}