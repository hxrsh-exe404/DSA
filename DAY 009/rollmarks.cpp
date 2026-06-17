#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // 2D array: col 0 = roll no, col 1 = marks
    int data[n][2];

    // Input
    for(int i = 0; i < n; i++) {
        cout << "Enter Roll No and Marks for student " << i + 1 << ": ";
        cin >> data[i][0] >> data[i][1];
    }

    cout << "\n--- Student Data ---\n";

    // Output
    for(int i = 0; i < n; i++) {
        cout << "Roll No: " << data[i][0]
             << " | Marks: " << data[i][1] << endl;
    }

    return 0;
}