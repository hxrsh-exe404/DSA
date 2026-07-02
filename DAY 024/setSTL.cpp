#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;     // set --> unique element, no modification is allowed, return element in sorted ordered
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(2);
    s.insert(2);

    for(auto i:s){          // auto automatically detects the data type
        cout<<i<<endl;      // return in sorted ordered
    }cout<<endl;

// create an iterator pointing to the first element
    set<int> :: iterator  it = s.begin();       // auto it = s.begin(); --> also worked
    it++;
    cout<<"Erase begin element --> "<<endl;
    s.erase(s.begin());                         // s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"5 is present or not --> "<<s.count(5)<<endl;     // .count --> show () present or not 
    set<int> :: iterator itr = s.find(5);                   // find() returns an iterator to the element if found
    for(auto it=itr;it!=s.end();it++){                      // iterate from the found element to the end of the set
        cout<<*it<<" ";
    }cout<<endl;
}

