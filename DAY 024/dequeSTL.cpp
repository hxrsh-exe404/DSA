#include<iostream>
#include<deque>     // deque library
using namespace std;

int main(){
    deque<int> d;           // deque initialization
    d.push_back(1);         // push element from back --> 1
    d.push_front(2);        // push element from front also --> 2 1
    d.push_back(3);         // push element from back --> 2 1 3
    cout<<"Deque Elements : "; 
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // all operations work properly --->
    cout<<"Print first Index element : "<<d.at(1)<<endl;        // .at() --> shows which index value
    cout<<"Front : "<<d.front()<<endl;                          // .front --> show first value
    cout<<"Back : "<<d.back()<<endl;                            // .back --> show last value
    cout<<"Empty or not : "<<d.empty()<<endl;                   // .empty --> shows is empty or not --> inbool

    cout<<"After pop elements : ";
    d.pop_back();            // pop element from back --> 2 1 ()
    d.pop_front();           // pop element from front --> () 1 ()
    for(int j:d){
        cout<<j<<" ";
    }cout<<endl;

    d.push_back(2);
    cout<<"Before erase : "<<d.size()<<endl;        // .size --> shows element present or not
    d.erase(d.begin(),d.begin()+1);                 // .erase --> erase elements from [.begin() to .begin()+1]
    cout<<"After erase : "<<d.size()<<endl;
    cout<<"only that element is present after erase operation perform : ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    

}