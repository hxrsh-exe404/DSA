#include<iostream>
using namespace std;
int main(){
//  int arr[2][3]={{1,2,3},{4,5,6}}   <----array of array--->
//  int arr[][3]={........} 

    int arr[2][3]={1,2,3,4,5,6};
    // row wise printing ---->
/*    for(int i=0;i<2;i++){       //rows
        for(int j=0;j<3;j++){   //column
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
*/        
    // column wise printing ---->
    for(int j=0;j<3;j++){       //column
        for(int i=0;i<2;i++){   //rows
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}