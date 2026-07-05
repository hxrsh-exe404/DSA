#include<iostream>
#include<vector>
using namespace std;
// check valid character or not
bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') ||
       (ch >= 'A' && ch <= 'Z') ||
       (ch >= '0' && ch <= '9')){
        return true;
    }
    return false;
}

// convert all character into lowercase
char toLower(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp=ch-'A' +'a';
            return temp;
    }    
}

bool checkPalindrome(vector<char> &s){
    int start = 0;
    int end = s.size() - 1;

    while(start < end){
// special character skip from right 
        while(start < end && !valid(s[start]))
            start++;
// special character skip from left
        while(start < end && !valid(s[end]))
            end--;
// check palindrome 
        if(toLower(s[start]) != toLower(s[end])){
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