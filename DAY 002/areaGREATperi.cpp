#include<iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"Enter a length ";
    cin>>l;
    cout<<"Enter a breadth ";
    cin>>b;
    float area = l*b;
    float perimeter = 2*(l+b);
    if (area>perimeter)
    cout<<area<<" is area of rectangle which is greater than its perimeter "<<perimeter;
    else
    cout<<perimeter<<" is perimeter of rectangle which is greater than its area "<<area;
    

    
}
