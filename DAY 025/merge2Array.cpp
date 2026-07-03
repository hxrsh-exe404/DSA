#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_Sorted_Array(vector<int> &arr, vector<int> &brr){
    int start_1=0,start_2=0;
    vector<int>crr;
    while(start_1<arr.size() && start_2<brr.size()){
        if(arr[start_1]<brr[start_2]){
            crr.push_back(arr[start_1]);
            start_1++;
        }else{
            crr.push_back(brr[start_2]);
            start_2++;
        }   
    }
    while(start_1<arr.size()){
        crr.push_back(arr[start_1]);
        start_1++;
    }
    while(start_2<brr.size()){
        crr.push_back(brr[start_2]);
        start_2++;
    }
    return crr;
}
 
int main(){
    vector<int> arr={1,3,5,7,9};
    vector<int> brr={2,4,6};

    vector<int> crr = merge_Sorted_Array(arr,brr);
    for(int i:crr){
        cout<<i<<" ";
    }cout<<endl;
}