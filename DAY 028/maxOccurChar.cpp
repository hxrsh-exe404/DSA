#include<iostream>
using namespace std;

char getMaxOccurChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number = 0;
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }else{
            number = ch - 'A';
        }
        arr[number]++;
    }
// find maximum occurence -->
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;      // ans change into char
    return finalAns;
}

int main(){
    string str;
    cout<<"Enter the string --> ";
    cin>>str;
    cout<<getMaxOccurChar(str)<<endl;
    return 0;

}