#include<iostream>
using namespace std;

void sayDigit(int num, string arr[]){

    // Base Case -->
    if(num==0)
        return;

    // Processing -->
    int digit=num%10;
    num=num/10;
    
    // Recursive -->
    sayDigit(num,arr);

    cout<<arr[digit]<<" ";


}

int main(){
    string arr[10]= {"Zero","one","Two","Three","Four", "Five", "Six","Seven", "Eight", "Nine"};
    int num;
    cout<<"Enter a number --> ";
    cin>>num;

    cout<<endl;
    sayDigit(num,arr);
    cout<<endl;

}