#include<iostream>
using namespace std;

// string length -->
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){     // no need size of char arry
        count++;
    }
    return count;
}


int main(){
    char name[20];
    cout<<"Enter Your Name : ";
    cin>>name;
// cin --> stop execution (space,tab,newline) 
    cout<<"Your Name is : "<<name<<endl;
    cout<<"Length --> "<<getLength(name)<<endl;

    
}