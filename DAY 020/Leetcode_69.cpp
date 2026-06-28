#include<iostream>
using namespace std;

int sqrRoot(int x){
    int start = 0;
    int end = x;
    long long int ans = -1;
    long long int mid = start+(end-start)/2;
// binary search ---->
    while(start<=end){
        long long int square = mid*mid;           //
        if(square==x){
            return mid;
        }else if(square<x){
            ans=mid;
            start = mid+1;
        }else if(square>x){
            end=mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;

}
 
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Square Root of "<<n<<" is " <<sqrRoot(n);

    return 0;
}