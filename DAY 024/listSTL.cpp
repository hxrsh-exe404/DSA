#include<iostream>
#include<list>
using namespace std; 

int main(){
    list<int> l;
    cout<<"Insert elements : ";
    l.push_back(1);
    l.push_front(2);

    list<int> n(l);     // copy list 
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"New Insert element : ";
    list<int> m(5,100);
    for(int i:m){
        cout<<i<<" ";
    }cout<<endl;

    

    l.erase(l.begin());         // erase from begin
    cout<<"After erase : ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list : "<<l.size()<<endl;
}