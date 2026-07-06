#include <iostream>
#include <vector>
using namespace std;

// Function to reverse characters between index l and r
void reverseRange(vector<char>& s, int start, int end){
    while (start < end){              // Two Pointer Approach
        swap(s[start], s[end]);       // Swap left and right characters
        start++;        // Move pointers
        end--;
    }
}

// Function to reverse the order of words
void reverseWords(vector<char>& s){
    int n = s.size();
    int start = 0;                                 // Starting index of the current word
    reverseRange(s, start, n - 1);                 // Step 1: Reverse the entire string    "the sky is blue" ---->  "eulb si yks eht"     
    for (int i = 0; i <= n; i++){                  // Traverse the string      // If we find a space or reach the end,  // it means one complete word is found
        if (i == n || s[i] == ' '){     
            reverseRange(s, start, i - 1);         // Reverse the current word
            start = i + 1;                         // Move start to the next word
        }
    }
}

int main(){
    // Character array input
    vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    reverseWords(s);           // Call function
    cout << "Output: ";        // Print result
    for (char ch : s){
        cout << ch;
    }cout << endl;

    return 0;
}