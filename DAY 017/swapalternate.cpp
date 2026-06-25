#include<iostream>
using namespace std;

//swap alternate arry 
void Alt_swap(int arr[], int size){
    int start=0;
    int end=1;
    while(end<size){                            //  for(int i=0;i<size;i+=2){
    swap(arr[start],arr[end]);                  //      swap(arr[i],arr[i+1]);
        end=end+2;                              //  }
        start=start+2;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size= sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before the alternate swap : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

//function call
    cout<<"Array after the alternate swap : ";
    Alt_swap(arr,6);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
} 