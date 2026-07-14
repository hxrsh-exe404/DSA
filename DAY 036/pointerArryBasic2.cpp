#include<iostream>
using namespace std;

// arr[i] = *(arr+i)
// i[arr] = *(i+arr)

int main (){
    
    int arr[10]={0,2,3,4,5,6,7,8,9,10};
    cout<<"Address of array --> "<<arr<<endl;
    cout<<"First location value --> "<<arr[0]<<endl;
    cout<<"First location Address of array --> "<<&arr[0]<<endl;
    cout<<"Value at zero location --> "<<*arr<<endl;
    cout<<"Value at zero location (+1) --> "<<*(arr)+1<<endl;
    cout<<"Value at first location --> "<<*(arr+1)<<endl;
    cout<<"Value at second location --> "<<2[arr];
    

    
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
     cout<<sizeof(&temp)<<endl;
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    

    int a[20]={1,2,3,5};
    cout<<"Array address of first block --> "<<&a[0]<<endl;
    cout<<"Address of whole array --> "<<&a<<endl;
    cout<<"Same whole arry address -->"<<a<<endl;

    int *p=&a[0];
    cout<<"In pointer block what is present --> "<<p<<endl;
    cout<<"In pointer block where that address point whoes value -->"<<*p<<endl;
    cout<<"pointer address --> "<<&p<<endl;

    

}