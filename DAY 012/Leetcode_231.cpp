#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    bool found = false;

    for(int i = 0; i < 31; i++) {
        if(n == (1 << i)) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "True";
    else
        cout << "False";

    return 0;
}