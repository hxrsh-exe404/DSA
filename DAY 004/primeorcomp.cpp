#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. : ";
    cin>>n;
    bool flag = true;  // let number is prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = false; // now number is composite
            break;
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else if(flag==true){
        cout<<n<<" Is Prime number" <<endl;
    }else{
        cout<<n<<" Is Composite number" <<endl;
    }

}