#include<iostream>
using namespace std;
int main(){             // if n has extra factors except 1 & n than it is composite
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            cout<<n<<" is a composite number"<<endl;
            break;
        }else{
            cout<<n<<" is not a composite number"<<endl;
            break;
        }
    }
}
