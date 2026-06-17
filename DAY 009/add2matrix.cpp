#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int brr[2][3]={6,5,4,3,2,1};
    int summ[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            summ[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<summ[i][j]<<" ";
        }cout<<endl;
    }
}