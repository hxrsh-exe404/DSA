#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int sum=0;
    int product=1;
    while(n!=0){
        int lastdigit=n%10;
        sum=sum+lastdigit;
        product=product*lastdigit;
        n=n/10;
    }
    int ans = product-sum;
    cout<<ans;
}