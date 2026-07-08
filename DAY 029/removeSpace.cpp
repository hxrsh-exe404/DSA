#include<iostream>
using namespace std;

string replaceSpaces(string &str){
    string temp="";

    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main(){
    string str;
    cout<<"Enter a String --> "; 
    getline(cin,str);       // cin.getline(str,100) <-- fot string arry --> str[100]

    string ans = replaceSpaces(str);
    cout<<"Replace Space by (@40) --> "<<ans;

    return 0;

}