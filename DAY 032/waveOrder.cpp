#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    vector<int>ans;
    for(int col=0;col<mCols;col++){
        if(col&1){              // for odd index --> Bottom to Top
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }else{                  // for even --> Top to Bottom
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main(){
   vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = wavePrint(arr,3,3);
    for(int x:ans){
        cout<<x<<" ";
    }

    return 0;
}