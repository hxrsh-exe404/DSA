#include<iostream>
using namespace std;

void updates(int arr[],int n){
    cout<<"Inside the function" <<endl;
    //update the value
    arr[0]=120;
    //printing the array
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 

    cout<<"Going back to main function"<<endl;

}

int main(){
    int arr[3]={1,2,3};
    updates(arr,3);

    //printing the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}