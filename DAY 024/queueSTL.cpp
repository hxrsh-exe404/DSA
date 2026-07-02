#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;     // queue --> FIFO   
    q.push("Hxrsh");
    q.push("exe");
// In queue .front() is worked not .top
    cout<<"Before pop Size of queue : "<<q.size()<<endl;
    cout<<"Before pop First Element --> "<<q.front()<<endl;
    q.pop();
    cout<<"After pop First Element --> "<<q.front()<<endl;
    cout<<"After pop Size of queue : "<<q.size()<<endl;

    cout<<"Empty or not : "<<q.empty()<<endl;

}