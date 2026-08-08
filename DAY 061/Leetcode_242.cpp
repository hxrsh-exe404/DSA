#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {

    if (s.length() != t.length())
        return false;

    int freq[26] = {0};

    for (char c : s)
        freq[c - 'a']++;

    for (char c : t)
        freq[c - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main() {

    string s = "anagram";
    string t = "nagaram";

    bool ans = isAnagram(s, t);

    if (ans)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}