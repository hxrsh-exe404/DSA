#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[3][4]={9,2,1,4,6,8,6,64,5,66,77,14};
    int mn= INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            mn=min(mn,arr[i][j]);
            }
        }cout<<mn;
    }
