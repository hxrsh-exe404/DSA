#include<iostream>
using namespace std;
int last_Term(int n){
    int AP=(3*n+7);
    return AP;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Last Term : "<<last_Term(n)<<endl;
}
