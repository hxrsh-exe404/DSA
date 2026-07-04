#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sum(vector<int> &arr, int n, vector<int> &brr, int m){
    int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int>ans;

    while(i>=0 && j>=0){
        int val1=arr[i];
        int val2=brr[j];
        int sum=val1+val2+carry;

        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum=arr[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum=brr[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,9};
    vector<int> brr = {1,9};
    vector<int> ans = sum(arr, arr.size(), brr, brr.size());
    cout<<endl;
     // First Number
    for(int i : arr)
        cout << i<<" ";
    cout << endl;
    // Second Number
    cout << "  + ";
    for(int i : brr)
        cout << i<<" ";
    cout << endl;
    // Line
    cout << "--------" << endl;
    //answer
    for(int digit : ans){
        cout << digit<<" ";
    }cout<<endl;

    return 0;

}