#include<iostream>
using namespace std;

int sqrInteger(int x){
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
// more precision --->
double morePrecision(int n, int precision, int tempSol){    // n=37 , precision=3 , tempSol=6
    double factor = 1;                                      // factor=1
    double ans = tempSol;                                   // ans=6
    for(int i=0;i<precision;i++){                           // 0-->3(i=0,0<3,0++)
        factor=factor/10;                                   // 1--->0.1--->0.01--->0.001
        for(double j=ans;j*j<n;j=j+factor){                 // j=6,36<37,j=6+0.1
            ans=j;                                          // ans=6.1
        }
    }
    return ans;
}
 
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int tempSol=sqrInteger(n);
    cout<<"Temp Square Root of "<<n<<" is " <<tempSol<<endl;
    cout<<"Answer is "<< morePrecision(n,3,tempSol)<<endl;
    return 0;
} 