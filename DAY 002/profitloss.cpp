#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter a CP : ";
    cin>>cp;
    cout<<"Enter a SP : ";
    cin>>sp;
    if(cp<sp){   
        int profit = sp-cp;                             // not check multiple conditions if we used if,else if,else
        cout<<"Seller has made a profit which is  "<< profit;     
    }else if(cp>sp){
        int loss = cp-sp;
        cout<<"Seller has made a loss which is "<< loss;
    }else{
        cout<<"Seller has made a no profit no loss";
    }

}
