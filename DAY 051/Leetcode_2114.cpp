#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int ans = 0;

    for (string s : sentences) {
        int words = 1;

        for (char ch : s) {
            if (ch == ' ')
                words++;
        }

        ans = max(ans, words);
    }

    return ans;
}

int main() {
    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    cout <<endl<< "Maximum number of words: "
         << mostWordsFound(sentences) << endl;

    return 0;
}