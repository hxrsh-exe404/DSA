#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // string binary;
    // int count=0;
    // while (n>0){
    //     int rem = n%2;
    //     if(rem==0){
    //         binary="0"+binary;
    //     }else{
    //         binary="1"+binary;
    //         count ++;
    //     }
    //     n=n/2;
    // }
    // cout<<binary<<endl;
    // cout<<count;
    int count = 0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;    // right sift
    }
    cout<<count;
}
