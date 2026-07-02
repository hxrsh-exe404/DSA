#include<iostream>
#include<vector>        // vector library
using namespace std;

int main(){
    std::cout<<"Hello Hxrsh\n";     //(std:: --> using namespace std)

    vector<int> v;     // vector create  --> Initialization

    vector<int> a(5,1);  // if size already given (a,b) --> a is size, b is value which initialized to whole array // if not given value it become [0] to whole array 
    cout<<"Print a by : "<<endl;
    cout<<"range based loop : ";
    for(int i:a){           // range based loop --> i = value (not a index)
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Normal loop : ";
    for(int i=0;i<a.size();i++){        // normal loop --> also shows index (i) but range based only shows value
        cout<<a[i]<<" ";
    }cout<<endl;

    vector<int> b(a);       // copy (a) vector data to vector (b)
    cout<<"Print b : ";
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity --> "<<v.capacity()<<endl;          // capacity --> 0
    
    v.push_back(1);     // insert one element from back but can't push from front 
    cout<<"Capacity --> "<<v.capacity()<<endl;          // capacity --> 1

    v.push_back(2);     // insert two element
    cout<<"Capacity --> "<<v.capacity()<<endl;          // capacity --> 2

    v.push_back(3);     // insert three element
    cout<<"Capacity --> "<<v.capacity()<<endl;          // capacity --> 4
// size tells how many elements are present, capacity tells how many elements can be stored.   
    cout<<"Size --> "<<v.size()<<endl;                  // size --> 3

    cout<<"Element at 2nd Index : "<<v.at(2)<<endl;       // .at operation --> show element at position

    cout<<"Front : "<<v.front()<<endl;                    // .front operation --> show first element
    cout<<"Back : "<<v.back()<<endl;                      // .back operation --> show last element

    cout<<"Before POP : ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();                 // .pop_back operation --> remove last element

    cout<<"After POP : ";
    for(int i :v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size the size : "<<v.size()<<endl;
    cout<<"Before clear size the Capacity : "<<v.capacity()<<endl;

    v.clear();      // .clear --> clear the size but not the capacity

    cout<<"After clear size the size : "<<v.size()<<endl;
    cout<<"Before clear size the Capacity : "<<v.capacity()<<endl;


}