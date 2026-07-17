#include<iostream>
using namespace std;

void update2(int& n){   // pass by value --> create a copy --> new memory allocate 
    n++;                // pass by reference --> same memory --> name different 
}

void update1(int n){
    n++;
}

int main(){
/*    
    int i=5;
    int &j=i;           // create a ref variable
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
*/

    int n=5;
    cout<<endl<<"Before --> "<<n<<endl;
    update2(n);
    cout<<"After --> "<<n<<endl;

    return 0;
}