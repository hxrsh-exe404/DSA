#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return;
}
void india(){
    cout<<"You are in India"<<endl;
    usa();                              // if we call any fun then it should be on top from wher we call
}
int main(){
    cout<<"You are in main"<<endl;
    india();

}