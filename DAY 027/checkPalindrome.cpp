#include<iostream>
#include<vector>
using namespace std;

bool checkPalindrome(vector<char> &s){
    int start=0;
    int end=s.size()-1;

    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    vector<char> s = {'m','a','d','a','m'};

    if(checkPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}