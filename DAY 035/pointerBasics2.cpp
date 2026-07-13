#include<iostream>
using namespace std;

int main(){
    int num=5;
    int *p=0;       
    p=&num;
    cout<<"Address --> "<<p<<endl;
    cout<<"old Value --> "<<*p<<endl;
    (*p)++;
    cout<<"Value updated --> "<< num<<endl;

// copying a pointer -->
    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    p=p+1;
    cout<<"Address + 1 --> "<<p<<endl;

    int n=5;
    int a=n;
    cout<<"a old Value --> "<< n<<endl;

    a++;
    cout<<"a new Value --> "<< n<<endl;


    return 0;
}