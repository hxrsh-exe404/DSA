#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[3][4]={9,2,1,4,6,8,6,64,5,66,77,14};
    int mx= INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(mx<arr[i][j]){       //mx=max(mx,arr[i][j]);
                mx=arr[i][j];
            }
        }
    }cout<<mx;
}