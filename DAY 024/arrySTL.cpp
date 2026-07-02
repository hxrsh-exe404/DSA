#include<iostream>
#include<array>                       // STL array library
using namespace std;

int main(){
    int arr[3] = {1,2,3};            // basic array 

    array<int,3> a = {1,2,3};       // STL array ---> [Fixed size]
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index --> "<<a.at(2)<<endl;
    cout<<"Empty or not --> "<<a.empty()<<endl;             // return bool

    cout<<"First Element --> "<<a.front()<<endl;
    cout<<"Last Element --> "<<a.back()<<endl;
}