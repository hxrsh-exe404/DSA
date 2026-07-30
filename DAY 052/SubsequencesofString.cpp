#include<iostream>
#include<vector>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans){
    // Base Case
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }
    //Exclude
    solve(str, output, index+1, ans);

    //Include
    char element=str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

vector<string> subsequences(string str){
    vector<string> ans;
    string output="";
    int index=0;
    solve(str, output, index, ans);
    return ans;
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<string> ans = subsequences(str);
    cout << "\nSubsequences are:\n";
    for(int i = 0; i < ans.size(); i++){
        cout << "\"" << ans[i] << "\"" << endl;
    }

    return 0;
}