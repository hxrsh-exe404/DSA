#include<iostream>
#include<vector>
using namespace std;

char toLower(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp=ch-'A' +'a';
            return temp;
    }    
}

bool checkPalindrome(vector<char> &s){
    int start=0;
    int end=s.size()-1;

    while(start<end){
        if(toLower(s[start]) != toLower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout<<"Enter a String --> ";
    cin>>str;
    vector<char> s(str.begin(),str.end());
    if(checkPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}