#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=20; i++){
        if (i==3 || i==5)  // if(i!=3 && i!=5) cout<<i<<" "
            continue;   //except 3 and 5
            cout<<i<<" ";      
    }

}