#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> maxi;          // priority queue --> Max heap
    priority_queue< int,vector<int> , greater<int> > mini;      // Min heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size --> "<<maxi.size()<<endl;
    int n=maxi.size();
    cout<<"Maxi Output : ";
    for(int i=0;i<n;i++){       // i=0;i<maxi.size();i++ why we don't use [i<maxi.size()] --> bcoz maxi size is also change bcoz of maxi.pop()
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<<"size --> "<<mini.size()<<endl;
    int m=mini.size();
    cout<<"Mini Output : ";
    for(int i=0;i<m;i++){       
        cout<<mini.top()<<" ";
    mini.pop();
    }cout<<endl;

    cout<<"Mini is Empty ? --> "<<mini.empty()<<endl;
}
