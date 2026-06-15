#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number upto 9 : ";
    cin>>x;
    int arr[]={1,8,6,4,2,3,0,5,9};
    int count=0;
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(x<arr[i]) count++;
    }cout<<count;

}