#include<iostream>
#include<map>
using namespace std;


int main(){
    map<int,string> m;          // map --> sorted order 
    m[1]=" Hxrsh";
    m[2]=" Esa";
    m[13]="Error";

    m.insert({5," Echo"});
    
    cout<<"Before erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 --> "<<m.count(13)<<endl;

    m.erase(13);                // just give key value to erase
    cout<<"After erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Starting from key 5 : ";
    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }


}