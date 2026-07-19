#include<iostream>
using namespace std;

int score = 15; // <-- global variable

void b(int& i){
    cout<<score<<" in b "<<endl;
    cout<<i<<endl;
}

void a(int& i){
    cout<<endl<<score<<" in a "<<endl;
    score++;    // <-- reflect everywhere BAD PRACTICE --> use reference variable
    cout<<i<<endl;
    b(i);
}

int main(){
    int i=5;
    a(i);

    return 0;
}