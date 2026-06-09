#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter x point : ";
    cin>>x;
    cout<<"Enter y point : ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"("<<x<<","<<y<<")"<< " point lies on I quadrant"; //++
    }else if(x<0 && y>0){
        cout<<"("<<x<<","<<y<<")"<< " point lies on II quadrant"; //-+
    }else if(x<0 && y<0){
        cout<<"("<<x<<","<<y<<")"<< " point lies on III quadrant"; // --
    }else{
        cout<<"("<<x<<","<<y<<")"<< " point lies on IV quadrant"; // +-
    }
    
    


}
